@class NSString, WFParameter;
@protocol WFParameterState, WFParameterValuePickable;

@interface WFParameterValueWrapper : NSObject

@property (readonly, copy, nonatomic) NSString *readableTitle;
@property (readonly, nonatomic) id<WFParameterState> value;
@property (readonly, nonatomic) WFParameter<WFParameterValuePickable> *parameter;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 parameter:(id)a1;

@end
