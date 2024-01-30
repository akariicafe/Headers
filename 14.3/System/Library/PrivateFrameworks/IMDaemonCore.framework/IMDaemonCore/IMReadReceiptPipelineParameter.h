@class NSString, NSArray, NSNumber, IMDChat;

@interface IMReadReceiptPipelineParameter : NSObject <IMReadReceiptProcessingParameter, IMMessageFromStorageParameter>

@property (copy, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSNumber *timestamp;
@property (copy, nonatomic) NSString *fromPushID;
@property (copy, nonatomic) NSString *fromIdentifier;
@property (nonatomic) BOOL isFromDefaultPairedDevice;
@property (nonatomic) BOOL isFromStorage;
@property (nonatomic) BOOL isLastFromStorage;
@property (nonatomic) BOOL isFromMe;
@property (retain, nonatomic) NSArray *messageItems;
@property (retain, nonatomic) IMDChat *chat;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBD:(id)a0;

@end
