@class NSDictionary, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ML3ArtworkConfiguration : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSDictionary *artworkConfigurationDictionary;
@property (retain, nonatomic) NSMutableDictionary *supportedSizesCache;
@property (nonatomic) double mainScreenScale;

+ (id)systemConfiguration;

- (id)initWithConfigurationDictionaries:(id)a0;
- (id)supportedSizesForMediaType:(unsigned int)a0 artworkType:(long long)a1;
- (id)sizesToAutogenerateForMediaType:(unsigned int)a0 artworkType:(long long)a1;
- (id)description;
- (void).cxx_destruct;
- (id)_supportedSizeKeysForMediaType:(unsigned int)a0 artworkType:(long long)a1;

@end
