@class NSURL;

@interface MDLURLTexture : MDLTexture {
    NSURL *_url;
}

@property (copy, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 name:(id)a1;

@end
