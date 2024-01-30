@class NSString, CXInProcessCallSource;

@interface CXInProcessProvider : CXProvider

@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) CXInProcessCallSource *callSource;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)hostProtocolDelegate;
- (id)initWithConfiguration:(id)a0;
- (id)initWithIdentifier:(id)a0 callSource:(id)a1 configuration:(id)a2;

@end
