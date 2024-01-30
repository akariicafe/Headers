@class SAActivityObject;

@interface SARecordActivity : SABaseClientBoundCommand

@property (retain, nonatomic) SAActivityObject *activity;

+ (id)recordActivity;
+ (id)recordActivityWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
