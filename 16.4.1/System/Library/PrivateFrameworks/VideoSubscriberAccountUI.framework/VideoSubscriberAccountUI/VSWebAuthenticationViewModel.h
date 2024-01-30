@class NSURL, VSMessageQueue;

@interface VSWebAuthenticationViewModel : VSViewModel

@property (copy, nonatomic) NSURL *sourceURL;
@property (readonly, nonatomic) VSMessageQueue *messagesToWeb;
@property (readonly, nonatomic) VSMessageQueue *messagesFromWeb;

- (id)init;
- (void).cxx_destruct;
- (void)configureWithRequest:(id)a0;

@end
