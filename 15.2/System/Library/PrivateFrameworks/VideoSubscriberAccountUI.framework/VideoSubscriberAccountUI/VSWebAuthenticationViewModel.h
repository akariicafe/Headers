@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel

@property (copy, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) VSMessageQueue *messagesToWeb;
@property (readonly, nonatomic) VSMessageQueue *messagesFromWeb;

- (void).cxx_destruct;
- (id)init;
- (void)configureWithRequest:(id)a0;

@end
