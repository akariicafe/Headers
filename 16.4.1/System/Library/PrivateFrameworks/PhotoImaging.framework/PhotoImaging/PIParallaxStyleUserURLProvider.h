@class NSURL;

@interface PIParallaxStyleUserURLProvider : NSObject <PIParallaxStyleURLProvider>

@property (retain, nonatomic) NSURL *baseURL;

- (id)initWithBaseURL:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)urlForIdentifier:(id)a0;

@end
