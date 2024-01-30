@class NSString, NSURL, NSNumber, SAFmfGeoFence;

@interface SAFmfGeoFenceSnippet : SAUISnippet

@property (retain, nonatomic) SAFmfGeoFence *aceFmfGeoFence;
@property (copy, nonatomic) NSNumber *enable;
@property (copy, nonatomic) NSString *fenceType;
@property (copy, nonatomic) NSNumber *oneTimeOnly;
@property (copy, nonatomic) NSURL *searchContext;

+ (id)geoFenceSnippet;
+ (id)geoFenceSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
