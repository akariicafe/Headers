@class NSString, NSDate;

@interface IMDMessageActiveDevice : NSObject

@property (retain, nonatomic) NSString *idsDestination;
@property (retain, nonatomic) NSDate *latestActiveDate;
@property (nonatomic) BOOL hasReceivedReadReceipt;
@property (retain, nonatomic) NSDate *latestReadReceipt;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldDisplayRemoteDecryptionFailure;
- (BOOL)shouldDisplayAttachmentDownloadFailure;
- (BOOL)shouldSendTypingIndicator;
- (BOOL)_hasReceivedReadReceiptRecently;
- (id)initWithIDSDestination:(id)a0 latestDate:(id)a1 latestReadReceiptDate:(id)a2 hasReceivedReadReceipt:(BOOL)a3;

@end
