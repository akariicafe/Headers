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

- (void).cxx_destruct;
- (id)_parsedContentNode:(id)a0 additionalAttributesFromParent:(id)a1;
- (id)_parsedElements:(id)a0;
- (id)_parsedSectionedCollection;
- (id)initWithRawResponseOutput:(id)a0 sectionBuilder:(id)a1 contentItemBuilder:(id)a2 filteredFCKinds:(id)a3 userIdentity:(id)a4;

@end
