@class NSString;

@interface HMDWHAAccessControlEvent : HMDLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isP2PEnabled;
@property (nonatomic) int privilegeLevel;
@property (nonatomic) BOOL isPasswordSet;

+ (void)initialize;
+ (id)uuid;
+ (id)eventWithP2PEnabled:(BOOL)a0 privilegeLevel:(long long)a1 passwordSet:(BOOL)a2;
+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)a0;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
