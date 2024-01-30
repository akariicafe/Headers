@class NSIndexSet, MPModelStoreBrowseSectionBuilder, MPModelStoreBrowseContentItemBuilder, MPSectionedCollection, ICUserIdentity;

@interface MPModelStoreBrowseRoomMusicKitResponseParser : NSObject {
    long long _parseOnceToken;
    id _rawResponseOutput;
    MPModelStoreBrowseSectionBuilder *_sectionBuilder;
    MPModelStoreBrowseContentItemBuilder *_contentItemBuilder;
    NSIndexSet *_filteredFCKinds;
    MPSectionedCollection *_results;
    ICUserIdentity *_userIdentity;
}

@property (readonly, nonatomic) MPSectionedCollection *results;

- (id)_parsedSectionedCollection;
- (void).cxx_destruct;
- (id)_parsedElements:(id)a0;
- (id)initWithRawResponseOutput:(id)a0 sectionBuilder:(id)a1 contentItemBuilder:(id)a2 filteredFCKinds:(id)a3 userIdentity:(id)a4;
- (id)_parsedContentNode:(id)a0 additionalAttributesFromParent:(id)a1;

@end
