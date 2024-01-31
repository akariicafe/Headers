@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) NSArray *actions;

- (id)defaultContext;
- (void).cxx_destruct;
- (void)performDefaultAction;
- (BOOL)shouldPerformDefaultAction;
- (void)transportButton1Clicked:(id)a0;
- (void)transportButton2Clicked:(id)a0;
- (void)transportButton3Clicked:(id)a0;
- (id)transportsMapping;
- (void)updateTransportButtons;

@end
