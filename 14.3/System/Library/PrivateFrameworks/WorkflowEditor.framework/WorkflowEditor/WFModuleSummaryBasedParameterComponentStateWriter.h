@interface WFModuleSummaryBasedParameterComponentStateWriter : NSObject <WFModuleParameterStateWriter>

@property (readonly, nonatomic) id /* block */ updateBlock;

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (BOOL)setState:(id)a0 ofParameter:(id)a1;

@end
