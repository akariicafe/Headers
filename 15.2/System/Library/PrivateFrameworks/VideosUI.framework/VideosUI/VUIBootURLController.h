@class NSURL;

@interface VUIBootURLController : NSObject

@property (retain, nonatomic) NSURL *localAppURL;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLocalAppURL:(id)a0;
- (void)fetchBootURLWithCompletionHandler:(id /* block */)a0;

@end
