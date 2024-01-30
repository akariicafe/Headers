@protocol WFVariableUIDelegate;

@interface WFVariableUIDelegateWrapper : NSObject

@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;

- (void).cxx_destruct;

@end
