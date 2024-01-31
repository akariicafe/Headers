@class CXInProcessCallSource, NSString;

@interface CXInProcessProvider : CXProvider

@property (weak, nonatomic) CXInProcessCallSource *callSource;
@property (readonly, copy, nonatomic) NSString *identifier;

- (id)initWithConfiguration:(id)a0 callSource:(id)a1;
- (id)initWithConfiguration:(id)a0;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (id)hostProtocolDelegate;

@end
