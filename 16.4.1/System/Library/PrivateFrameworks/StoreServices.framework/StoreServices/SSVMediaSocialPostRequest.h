@class NSString, SSVMediaSocialPostDescription;

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) SSVMediaSocialPostDescription *postDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (id)initWithPostDescription:(id)a0;

@end
