@class NSURL, NSSet;

@interface TVPURLMediaItem : TVPBaseMediaItem

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSSet *traits;

- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 traits:(id)a1;
- (BOOL)hasTrait:(id)a0;
- (BOOL)isEqualToMediaItem:(id)a0;
- (id)mediaItemURL;

@end
