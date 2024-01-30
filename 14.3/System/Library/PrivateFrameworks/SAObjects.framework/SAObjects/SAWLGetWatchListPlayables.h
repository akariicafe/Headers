@class NSString;

@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *statsId;

+ (id)getWatchListPlayables;
+ (id)getWatchListPlayablesWithDictionary:(id)a0 context:(id)a1;

- (id)groupIdentifier;
- (id)encodedClassName;
- (BOOL)requiresResponse;

@end
