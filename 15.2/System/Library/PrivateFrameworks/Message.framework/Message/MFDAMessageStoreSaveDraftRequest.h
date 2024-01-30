@class NSString;

@interface MFDAMessageStoreSaveDraftRequest : DADraftMessageRequest <MFDAMailAccountRequest> {
    NSString *_messageIDHeader;
    NSString *_folderID;
}

@property (readonly, nonatomic) BOOL shouldSend;
@property (readonly, nonatomic) BOOL isUserRequested;

- (unsigned long long)generationNumber;
- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 mailbox:(id)a1;

@end
