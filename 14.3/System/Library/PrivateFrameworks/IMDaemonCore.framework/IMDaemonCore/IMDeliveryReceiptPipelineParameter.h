@class NSString, NSArray, NSNumber, IMDChat;

@interface IMDeliveryReceiptPipelineParameter : NSObject <IMDeliveryReceiptProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBD:(id)a0;

@end
