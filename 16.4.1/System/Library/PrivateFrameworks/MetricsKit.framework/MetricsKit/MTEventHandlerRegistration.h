@class NSString, NSArray, MTEventHandler;

@interface MTEventHandlerRegistration : MTObject

@property (retain, nonatomic) NSString *registeredName;
@property (retain, nonatomic) Class eventHandlerClass;
@property (retain, nonatomic) NSArray *eventData;
@property (retain, nonatomic) MTEventHandler *eventHandler;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)a0 name:(id)a1 class:(Class)a2 eventData:(id)a3;

@end
