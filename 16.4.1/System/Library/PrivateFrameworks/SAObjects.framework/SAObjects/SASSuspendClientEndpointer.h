@class NSNumber;

@interface SASSuspendClientEndpointer : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *audioProcessedMs;
@property (copy, nonatomic) NSNumber *suspendDurationMs;

+ (id)suspendClientEndpointer;
+ (id)suspendClientEndpointerWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
