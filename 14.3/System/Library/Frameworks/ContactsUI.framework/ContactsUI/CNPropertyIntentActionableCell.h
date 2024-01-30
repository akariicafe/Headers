@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) NSArray *actions;

- (id)transportsMapping;
- (void)transportButton1Clicked:(id)a0;
- (void)transportButton2Clicked:(id)a0;
- (void)transportButton3Clicked:(id)a0;
- (void).cxx_destruct;
- (id)defaultContext;
- (void)updateTransportButtons;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;

@end
