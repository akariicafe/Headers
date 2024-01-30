@class NSData, NSDate;

@interface UARPAccessoryMsgQueueEntry : NSObject

@property (readonly) BOOL needsResponse;
@property (readonly) NSData *msg;
@property (readonly) NSDate *queueTime;

- (void).cxx_destruct;
- (id)initWithMsg:(id)a0 needsResponse:(BOOL)a1;

@end
