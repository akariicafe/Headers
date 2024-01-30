@class NSString;

@interface WLKMovieClipAsset : NSObject

@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, copy, nonatomic) NSString *durationString;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSString *url;

+ (id)movieClipAssetsWithArray:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)_init;
- (id)initWithDictionary:(id)a0;

@end
