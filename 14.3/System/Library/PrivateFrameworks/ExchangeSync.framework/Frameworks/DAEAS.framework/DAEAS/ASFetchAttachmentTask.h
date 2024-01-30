@class NSString, NSFileHandle;

@interface ASFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol>

@property (retain, nonatomic) NSString *attachmentUUID;
@property (retain, nonatomic) NSString *attachmentName;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSString *localFileName;
@property (retain, nonatomic) NSString *attachmentContentType;
@property (nonatomic) unsigned long long localFileLength;
@property (retain, nonatomic) NSFileHandle *localFileHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWithError:(id)a0;
- (void).cxx_destruct;
- (id)command;
- (id)requestBody;
- (int)commandCode;
- (BOOL)processContext:(id)a0;
- (BOOL)shouldLogIncomingData;
- (id)initForMessageServerID:(id)a0 andAttachmentName:(id)a1;
- (id)initForMessageUUID:(id)a0;
- (id)parameterData;

@end
