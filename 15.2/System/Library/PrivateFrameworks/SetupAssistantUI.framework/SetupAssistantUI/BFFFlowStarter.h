@protocol BFFFlowDiverter;

@interface BFFFlowStarter : NSObject

@property (retain, nonatomic) id<BFFFlowDiverter> diverter;

- (void).cxx_destruct;
- (id)initWithFlowDiverter:(id)a0;
- (BOOL)controllerNeedsToRunForClass:(Class)a0;
- (BOOL)controllerNeedsToRunForFlowItem:(id)a0;

@end
