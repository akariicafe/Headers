@class WFParameter, WFGradient, NSString, NSError;
@protocol WFParameterState;

@interface WFParameterEditorModel : NSObject

@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) id<WFParameterState> state;
@property (readonly, nonatomic) NSError *resourceError;
@property (readonly, nonatomic) WFGradient *buttonGradient;
@property (readonly, nonatomic) NSString *widgetSizeClass;

- (void).cxx_destruct;
- (id)initWithParameter:(id)a0 state:(id)a1;
- (id)initWithParameter:(id)a0 state:(id)a1 widgetSizeClass:(id)a2;
- (id)initWithResourceError:(id)a0 buttonGradient:(id)a1;

@end
