@class NSString, IKJSObject, NSDate, IKDOMNode;

@interface IKDOMCustomEvent : IKDOMEvent <IKJSDOMCustomEvent>

@property (retain, nonatomic) IKJSObject *detail;
@property (readonly, retain, nonatomic) NSString *type;
@property (readonly, retain, nonatomic) IKDOMNode *target;
@property (readonly, retain, nonatomic) IKDOMNode *currentTarget;
@property (readonly, nonatomic) long long eventPhase;
@property (readonly, nonatomic) BOOL bubbles;
@property (readonly, nonatomic) BOOL cancelable;
@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) BOOL defaultPrevented;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0 type:(id)a1 xmlAttribute:(id)a2 canBubble:(BOOL)a3 isCancelable:(BOOL)a4 detail:(id)a5;
- (id)initWithType:(id)a0 eventInit:(id)a1;

@end
