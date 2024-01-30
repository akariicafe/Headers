@class NEIKEv2ChildSA;

@interface NEIKEv2NewChildContext : NEIKEv2RequestContext

@property (retain, nonatomic) NEIKEv2ChildSA *childSA;

- (void).cxx_destruct;
- (id)description;
- (id)initWithChildSA:(id)a0;

@end
