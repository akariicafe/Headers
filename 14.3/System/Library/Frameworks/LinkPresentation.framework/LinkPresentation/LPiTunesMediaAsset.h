@class NSString, NSDictionary, NSURL, LPFetcher;

@interface LPiTunesMediaAsset : NSObject {
    Class _customFetcherClass;
    long long _type;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *colors;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) LPFetcher *fetcher;

- (void).cxx_destruct;
- (id)metadata;
- (id)initWithVideoURL:(id)a0 name:(id)a1;
- (id)initWithImageURL:(id)a0 colors:(id)a1 name:(id)a2;
- (id)initWithName:(id)a0 customFetcherClass:(Class)a1;

@end
