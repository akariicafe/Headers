@class NSString;

@interface SAWLRemoveContentFromWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *siriLocale;
@property (copy, nonatomic) NSString *title;

+ (id)removeContentFromWatchList;
+ (id)removeContentFromWatchListWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
