@class NSURL;

@interface VUIBootURLController : NSObject

@property (retain, nonatomic) NSURL *localAppURL;

- (id)init;
- (void).cxx_destruct;
- (void)fetchBootURLWithCompletionHandler:(id /* block */)a0;
- (id)initWithLocalAppURL:(id)a0;

@end
