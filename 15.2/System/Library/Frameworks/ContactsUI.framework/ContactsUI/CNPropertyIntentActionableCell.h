@class NSArray;

@interface CNPropertyIntentActionableCell : CNPropertySimpleTransportCell

@property (retain, nonatomic) NSArray *actions;

- (void).cxx_destruct;
- (id)transportsMapping;
- (void)transportButton1Clicked:(id)a0;
- (void)transportButton2Clicked:(id)a0;
- (void)transportButton3Clicked:(id)a0;
- (id)defaultContext;
- (BOOL)shouldPerformDefaultAction;
- (void)updateTransportButtons;
- (void)performDefaultAction;

@end
