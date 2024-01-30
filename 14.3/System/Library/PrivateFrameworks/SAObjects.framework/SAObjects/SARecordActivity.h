@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SAActivityObject *activity;

+ (id)recordActivity;
+ (id)recordActivityWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
