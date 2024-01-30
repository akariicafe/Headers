@class NSString;
@protocol WFState;

@interface _WFStateMachineTransitionEvent : NSObject

@property (readonly, nonatomic) id<WFState> state;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isValid) BOOL valid;

+ (id)transitionEventWithState:(id)a0 reason:(id)a1 valid:(BOOL)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithState:(id)a0 reason:(id)a1 valid:(BOOL)a2;

@end
