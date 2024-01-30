@class NSString, SSVMediaSocialPostDescription;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) SSVMediaSocialPostDescription *postDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithPostDescription:(id)a0;

@end
