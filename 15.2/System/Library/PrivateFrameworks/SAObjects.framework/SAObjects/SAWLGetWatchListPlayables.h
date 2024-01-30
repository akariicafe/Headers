@class NSString;

@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *statsId;

+ (id)getWatchListPlayables;
+ (id)getWatchListPlayablesWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
