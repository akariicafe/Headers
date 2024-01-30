@class NSString, NSData;

@interface FudPersonalizationObjectInfo : NSObject <NSSecureCoding> {
    BOOL _esecSet;
    BOOL _eproSet;
    BOOL _trustedSet;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *objectTag;
@property (retain, nonatomic) NSData *digest;
@property (nonatomic) BOOL trusted;
@property (nonatomic) BOOL effectiveProductionMode;
@property (nonatomic) BOOL effectiveSecurityMode;

- (void)encodeWithCoder:(id)a0;
- (id)initWithTag:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)isTrustedSet;
- (BOOL)isEffectiveProductionModeSet;
- (BOOL)isEffectiveSecurityModeSet;

@end
