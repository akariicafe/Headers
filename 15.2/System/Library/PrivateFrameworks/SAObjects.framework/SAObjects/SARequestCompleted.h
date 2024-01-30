@class NSString;

@interface SARequestCompleted : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *turnId;

+ (id)requestCompleted;
+ (id)requestCompletedWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
