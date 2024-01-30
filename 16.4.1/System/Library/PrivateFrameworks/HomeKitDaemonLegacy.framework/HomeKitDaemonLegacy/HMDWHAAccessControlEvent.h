@class NSString;

@interface HMDWHAAccessControlEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isP2PEnabled;
@property (nonatomic) int privilegeLevel;
@property (nonatomic) BOOL isPasswordSet;

+ (int)awdUserPrivilegeFromHMUserPrivilege:(long long)a0;
+ (id)eventWithP2PEnabled:(BOOL)a0 privilegeLevel:(long long)a1 passwordSet:(BOOL)a2;

- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end
