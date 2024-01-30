@class NSError, WFGradient, WFParameter;
@protocol WFParameterState;

@interface WFParameterEditorModel : NSObject

@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) id<WFParameterState> state;
@property (readonly, nonatomic) NSError *resourceError;
@property (readonly, nonatomic) WFGradient *buttonGradient;
@property (readonly, nonatomic) long long widgetFamily;
@property (nonatomic) BOOL becomeFirstResponder;

- (void).cxx_destruct;
- (id)initWithParameter:(id)a0 state:(id)a1;
- (id)initWithParameter:(id)a0 state:(id)a1 widgetFamily:(long long)a2;
- (id)initWithResourceError:(id)a0 buttonGradient:(id)a1;

@end
