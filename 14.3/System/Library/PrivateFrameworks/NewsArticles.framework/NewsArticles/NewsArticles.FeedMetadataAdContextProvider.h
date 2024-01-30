@interface NewsArticles.FeedMetadataAdContextProvider : NSObject <NUAdContextProvider> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ contentProviderId;
    void /* unknown type, empty encoding */ languages;
    void /* unknown type, empty encoding */ rating;
    void /* unknown type, empty encoding */ sectionId;
    void /* unknown type, empty encoding */ categories;
    void /* unknown type, empty encoding */ keywords;
    void /* unknown type, empty encoding */ targetingId;
    void /* unknown type, empty encoding */ additionalMetadata;
}

- (id)adContextValueForKeyPath:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
