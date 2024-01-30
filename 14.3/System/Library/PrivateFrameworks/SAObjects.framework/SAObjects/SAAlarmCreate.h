@class NSString, SAAlarmObject;

@interface SAAlarmCreate : SADomainCommand <SAAlarmAlarmAction>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAAlarmObject *alarmToCreate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithDictionary:(id)a0 context:(id)a1;
+ (id)create;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
