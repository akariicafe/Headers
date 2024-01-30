@class NSString;

@interface DNDBypassSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long immediateBypassEventSourceType;
@property (readonly, copy, nonatomic) NSString *immediateBypassCNGroupIdentifier;
@property (readonly, nonatomic) unsigned long long repeatEventSourceBehaviorEnabledSetting;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithSettings:(id)a0;
- (id)_initWithImmediateBypassEventSourceType:(unsigned long long)a0 immediateBypassCNGroupIdentifier:(id)a1 repeatEventSourceBehaviorEnabledSetting:(unsigned long long)a2;

@end
