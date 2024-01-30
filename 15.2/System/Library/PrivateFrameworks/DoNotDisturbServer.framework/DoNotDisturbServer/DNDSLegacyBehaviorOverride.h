@class NSArray;

@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long overrideType;
@property (readonly, nonatomic) unsigned long long mode;
@property (readonly, copy, nonatomic) NSArray *effectiveIntervals;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOverrideType:(unsigned long long)a0 mode:(unsigned long long)a1 effectiveIntervals:(id)a2;

@end
