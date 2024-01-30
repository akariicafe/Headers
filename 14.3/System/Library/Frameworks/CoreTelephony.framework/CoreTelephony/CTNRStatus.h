@interface CTNRStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isSADisabled;
@property (nonatomic) unsigned long long saDisabledReasonMask;
@property (nonatomic) BOOL isNSADisabled;
@property (nonatomic) unsigned long long nsaDisabledReasonMask;

+ (id)default;

- (id)initWithSADisabled:(BOOL)a0 saReasonMask:(unsigned long long)a1 nsaDisabled:(BOOL)a2 nsaReasonMask:(unsigned long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
