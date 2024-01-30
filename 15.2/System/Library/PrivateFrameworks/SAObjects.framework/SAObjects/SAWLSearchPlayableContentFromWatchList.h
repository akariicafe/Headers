@class NSString;

@interface SAWLSearchPlayableContentFromWatchList : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (nonatomic) BOOL onlyReturnNextItem;
@property (copy, nonatomic) NSString *siriLocale;
@property (copy, nonatomic) NSString *title;

+ (id)searchPlayableContentFromWatchList;
+ (id)searchPlayableContentFromWatchListWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
