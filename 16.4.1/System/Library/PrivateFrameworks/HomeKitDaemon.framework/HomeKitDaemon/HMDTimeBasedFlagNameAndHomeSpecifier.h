@class NSString, NSUUID;

@interface HMDTimeBasedFlagNameAndHomeSpecifier : NSObject <HMDTimeBasedFlagSpecifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *flagName;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)specifierWithFlagName:(id)a0 homeUUID:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFlagName:(id)a0 homeUUID:(id)a1;

@end
