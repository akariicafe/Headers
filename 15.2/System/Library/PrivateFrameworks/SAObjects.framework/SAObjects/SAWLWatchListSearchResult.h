@class NSString, SAUIImageResource, NSDate;

@interface SAWLWatchListSearchResult : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *canonicalId;
@property (copy, nonatomic) NSString *contentType;
@property (retain, nonatomic) SAUIImageResource *evodFeaturingImage;
@property (retain, nonatomic) SAUIImageResource *image;
@property (nonatomic) BOOL isEvod;
@property (copy, nonatomic) NSString *network;
@property (copy, nonatomic) NSDate *releaseDate;
@property (copy, nonatomic) NSString *shelfType;
@property (copy, nonatomic) NSString *studio;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)watchListSearchResult;
+ (id)watchListSearchResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
