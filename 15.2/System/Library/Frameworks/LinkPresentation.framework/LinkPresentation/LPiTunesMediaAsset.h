@class NSString, NSDictionary, NSURL, LPFetcher, MPStoreLyricsSnippetURLComponents;

@interface LPiTunesMediaAsset : NSObject {
    long long _type;
    MPStoreLyricsSnippetURLComponents *_lyricComponents;
}

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSDictionary *colors;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) LPFetcher *fetcher;

- (id)metadata;
- (void).cxx_destruct;
- (id)initWithVideoURL:(id)a0 name:(id)a1;
- (id)initWithName:(id)a0 lyricComponents:(id)a1;
- (id)initWithImageURL:(id)a0 colors:(id)a1 name:(id)a2;

@end
