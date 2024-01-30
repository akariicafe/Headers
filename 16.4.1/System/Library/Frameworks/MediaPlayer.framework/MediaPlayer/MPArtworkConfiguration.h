@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject

@property (retain, nonatomic) ML3ArtworkConfiguration *artworkConfiguration;

+ (id)systemConfiguration;

- (id)description;
- (void).cxx_destruct;
- (id)initWithConfigurationDictionaries:(id)a0;
- (id)sizesToAutogenerateForMediaType:(unsigned long long)a0 artworkType:(long long)a1;
- (id)supportedSizesForMediaType:(unsigned long long)a0 artworkType:(long long)a1;

@end
