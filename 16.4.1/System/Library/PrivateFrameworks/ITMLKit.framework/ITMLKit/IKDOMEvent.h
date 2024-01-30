@class NSString, IKDOMNode, NSDate;

@interface IKDOMEvent : IKJSObject <IKJSDOMEvent>

@property (retain, nonatomic) IKDOMNode *currentTarget;
@property (nonatomic) long long eventPhase;
@property (nonatomic) long long dispatchState;
@property (nonatomic) BOOL defaultPrevented;
@property (retain, nonatomic) IKDOMNode *target;
@property (readonly, retain, nonatomic) NSString *xmlAttribute;
@property (nonatomic, getter=isInUse) BOOL inUse;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL bubbles;
@property (readonly, nonatomic) BOOL cancelable;
@property (readonly, nonatomic) NSDate *timeStamp;

- (void).cxx_destruct;
- (void)stopPropagation;
- (void)preventDefault;
- (void)stopImmediatePropagation;
- (id)initWithAppContext:(id)a0 type:(id)a1 xmlAttribute:(id)a2 canBubble:(BOOL)a3 isCancelable:(BOOL)a4;
- (id)initWithType:(id)a0 eventInit:(id)a1;
- (BOOL)isImmediatePropagationStopped;
- (BOOL)isPropagationStopped;
- (void)updateDispatchStateWithCurrentTarget:(id)a0 phase:(long long)a1;

@end
