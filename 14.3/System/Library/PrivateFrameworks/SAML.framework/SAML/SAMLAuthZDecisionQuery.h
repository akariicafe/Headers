@class NSString, SAMLAuthZDecisionQueryElement;

@interface SAMLAuthZDecisionQuery : XMLWrapperDoc

@property (retain, nonatomic) SAMLAuthZDecisionQueryElement *requestElement;
@property (readonly, nonatomic) NSString *channelId;

- (void).cxx_destruct;
- (void)addAction:(id)a0;
- (void)setResource:(id)a0;
- (id)initWithData:(id)a0 schema:(id)a1 error:(id *)a2;
- (id)initWithElement:(id)a0 schema:(id)a1 error:(id *)a2;
- (void)setSubjectFromResponse:(id)a0;

@end
