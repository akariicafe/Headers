@class NSString, NSNumber;

@interface ICASFastSyncMessageData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfMessagesSent;
@property (readonly, nonatomic) NSNumber *countOfMessagesReceived;
@property (readonly, nonatomic) NSNumber *avgMessageSizeInBytes;
@property (readonly, nonatomic) NSNumber *maxMessageSizeInBytes;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfMessagesSent:(id)a0 countOfMessagesReceived:(id)a1 avgMessageSizeInBytes:(id)a2 maxMessageSizeInBytes:(id)a3;

@end
