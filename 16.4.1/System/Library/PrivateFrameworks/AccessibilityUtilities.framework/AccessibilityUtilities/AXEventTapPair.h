@class NSString;

@interface AXEventTapPair : NSObject

@property (copy, nonatomic) id /* block */ handler;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) int priority;
@property (nonatomic) int type;
@property (retain, nonatomic) struct __IOHIDEventSystemClient { } *systemClient;
@property (copy, nonatomic) id /* block */ matchingServiceHandler;
@property (copy, nonatomic) id /* block */ failedToHandleInTime;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;

@end
