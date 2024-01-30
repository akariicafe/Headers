@class NSString;

@interface SAWLGetWatchListPlayables : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *statsId;

+ (id)getWatchListPlayables;
+ (id)getWatchListPlayablesWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
