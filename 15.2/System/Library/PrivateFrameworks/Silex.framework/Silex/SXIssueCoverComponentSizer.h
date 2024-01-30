@protocol SXIssueCoverLayoutAttributesFactory;

@interface SXIssueCoverComponentSizer : SXComponentSizer

@property (readonly, nonatomic) id<SXIssueCoverLayoutAttributesFactory> layoutOptionsFactory;

- (void).cxx_destruct;
- (double)calculateHeightForWidth:(double)a0 layoutContext:(id)a1;
- (id)initWithComponent:(id)a0 componentLayout:(id)a1 componentStyle:(id)a2 DOMObjectProvider:(id)a3 layoutOptions:(id)a4 layoutOptionsFactory:(id)a5;

@end
