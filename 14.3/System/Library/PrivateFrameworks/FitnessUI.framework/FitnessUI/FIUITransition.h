@class NSString, FIUIState;

@interface FIUITransition : NSObject

@property (retain, nonatomic) NSString *label;
@property (weak, nonatomic) FIUIState *toState;
@property (nonatomic) long long event;
@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) id /* block */ gate;

- (void).cxx_destruct;

@end
