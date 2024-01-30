@class NSArray, NSNumber, NSString;

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *imageResults;
@property (copy, nonatomic) NSArray *newsResults;
@property (copy, nonatomic) NSArray *relatedSearchResults;
@property (copy, nonatomic) NSNumber *totalImageResults;
@property (copy, nonatomic) NSNumber *totalNewsResults;
@property (copy, nonatomic) NSNumber *totalVideoResults;
@property (copy, nonatomic) NSNumber *totalWebResults;
@property (copy, nonatomic) NSArray *videoResults;
@property (copy, nonatomic) NSArray *webResults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)webSearchResult;
+ (id)webSearchResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
