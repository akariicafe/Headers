@class NSURL;

@interface VUIBootURLController : NSObject

@property (retain, nonatomic) NSURL *localAppURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocalAppURL:(id)a0;
- (void)fetchBootURLWithCompletionHandler:(id /* block */)a0;

@end
