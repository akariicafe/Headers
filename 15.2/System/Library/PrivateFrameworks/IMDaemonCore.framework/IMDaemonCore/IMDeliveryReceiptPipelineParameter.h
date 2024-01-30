@class NSString, NSArray, NSNumber, IMDChat;

@interface IMDeliveryReceiptPipelineParameter : NSObject <IMDeliveryReceiptProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (id)description;
- (void).cxx_destruct;
- (id)initWithBD:(id)a0;

@end
