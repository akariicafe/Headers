@class NSString, SAUserActivity;

@interface SAReminderUserActivityPayload : AceObject <SAReminderPayload>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SAUserActivity *userActivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)userActivityPayload;
+ (id)userActivityPayloadWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
