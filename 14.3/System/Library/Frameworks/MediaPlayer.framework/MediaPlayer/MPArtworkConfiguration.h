@class ML3ArtworkConfiguration;

@interface MPArtworkConfiguration : NSObject

@property (retain, nonatomic) ML3ArtworkConfiguration *artworkConfiguration;

+ (id)systemConfiguration;

- (void).cxx_destruct;
- (id)description;
- (id)initWithConfigurationDictionaries:(id)a0;
- (id)supportedSizesForMediaType:(unsigned long long)a0 artworkType:(long long)a1;
- (id)sizesToAutogenerateForMediaType:(unsigned long long)a0 artworkType:(long long)a1;

@end
