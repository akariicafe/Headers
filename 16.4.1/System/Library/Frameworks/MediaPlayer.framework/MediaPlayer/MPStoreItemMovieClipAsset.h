@class NSDictionary, NSString, NSURL;

@interface MPStoreItemMovieClipAsset : NSObject

@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSURL *hlsURL;
@property (readonly, copy, nonatomic) NSURL *url;

- (id)initWithLookupDictionary:(id)a0;
- (void).cxx_destruct;

@end
