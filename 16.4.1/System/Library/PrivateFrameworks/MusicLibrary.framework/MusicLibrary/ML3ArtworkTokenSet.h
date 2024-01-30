@class NSString, ML3Entity, NSDictionary;

@interface ML3ArtworkTokenSet : NSObject {
    ML3Entity *_entity;
    long long _artworkType;
    NSString *_availableArtworkToken;
    NSString *_fetchableArtworkToken;
    long long _fetchableArtworkSourceType;
    NSDictionary *_artworkSourceToTokenMap;
    BOOL _faultedInBestTokens;
    BOOL _faultedInTokens;
}

@property (nonatomic) double retrievalTime;
@property (readonly, nonatomic) NSString *availableArtworkToken;
@property (readonly, nonatomic) NSString *fetchableArtworkToken;
@property (readonly, nonatomic) long long fetchableArtworkSourceType;

- (void).cxx_destruct;
- (void)_faultInBestTokens;
- (void)_faultInTokens;
- (id)artworkTokenForSource:(long long)a0;
- (id)initWithEntity:(id)a0 artworkType:(long long)a1;

@end
