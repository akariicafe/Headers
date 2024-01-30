@class NSString, RWIProtocolDebuggerLocation;

@interface RWIProtocolDOMEventListener : RWIProtocolJSONObject

@property (nonatomic) int eventListenerId;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) BOOL useCapture;
@property (nonatomic) BOOL isAttribute;
@property (nonatomic) int nodeId;
@property (nonatomic) BOOL onWindow;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSString *handlerName;
@property (nonatomic) BOOL passive;
@property (nonatomic) BOOL once;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL hasBreakpoint;

- (id)initWithEventListenerId:(int)a0 type:(id)a1 useCapture:(BOOL)a2 isAttribute:(BOOL)a3;

@end
