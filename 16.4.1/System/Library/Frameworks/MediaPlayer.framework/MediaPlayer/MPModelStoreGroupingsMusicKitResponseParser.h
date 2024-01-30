@class ICUserIdentity, MPModelStoreBrowseSectionBuilder, NSString, ICURLBag, MPSectionedCollection, NSRegularExpression, NSIndexSet, MPModelStoreBrowseContentItemBuilder;

@interface MPModelStoreGroupingsMusicKitResponseParser : NSObject {
    long long _parseOnceToken;
    id _rawResponseOutput;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    NSIndexSet *_filteredFCKinds;
    MPSectionedCollection *_results;
    ICUserIdentity *_userIdentity;
    unsigned long long _options;
    ICURLBag *_storeURLBag;
    NSRegularExpression *_storeBagLinkRegularExpression;
    NSString *_rootObjectIdentifier;
}

@property (readonly, nonatomic) MPSectionedCollection *results;

- (id)description;
- (void).cxx_destruct;
- (id)_parsedContentNode:(id)a0 uniformContentItemTypeResolver:(id)a1 additionalAttributesFromParent:(id)a2;
- (id)_parsedEditorialElement:(id)a0;
- (id)_parsedEditorialElementX:(id)a0;
- (id)_parsedEditorialElements:(id)a0;
- (id)_parsedSectionedCollection;
- (id)attributesForContentNode:(id)a0;
- (id)bagRoomURLRegularExpression;
- (id)childrenOfContentNode:(id)a0;
- (BOOL)featuredContentKindCorrespondsToItem:(id)a0;
- (long long)featuredContentKindForNode:(id)a0;
- (id)firstChildOfContentNode:(id)a0;
- (id)initWithRawResponseOutput:(id)a0 sectionBuilder:(id)a1 contentItemBuilder:(id)a2 filteredFCKinds:(id)a3 userIdentity:(id)a4 rootObjectIdentifier:(id)a5 options:(unsigned long long)a6 storeURLBag:(id)a7;
- (BOOL)isContentNodeAnEditorialElement:(id)a0;
- (id)linkSectionWithDictionary:(id)a0;
- (id)linksForContentNode:(id)a0;
- (id)musicAPIURLWithLinkURLString:(id)a0;

@end
