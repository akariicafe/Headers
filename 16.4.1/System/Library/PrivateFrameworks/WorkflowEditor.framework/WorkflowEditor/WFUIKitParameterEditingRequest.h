@class WFParameter;
@protocol WFParameterState;

@interface WFUIKitParameterEditingRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) WFParameter *parameter;
@property (readonly, nonatomic) id<WFParameterState> currentState;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameter:(id)a0 currentState:(id)a1;

@end
