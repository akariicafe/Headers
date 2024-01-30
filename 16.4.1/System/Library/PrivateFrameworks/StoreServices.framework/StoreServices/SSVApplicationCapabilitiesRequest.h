@class NSString;

@interface SSVApplicationCapabilitiesRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)copyXPCEncoding;
- (void).cxx_destruct;
- (void)startWithCapabilitiesResponseBlock:(id /* block */)a0;

@end
