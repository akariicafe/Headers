@protocol WFParameterState;

@interface WFUIKitParameterEditingResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<WFParameterState> parameterState;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithParameterState:(id)a0;

@end
