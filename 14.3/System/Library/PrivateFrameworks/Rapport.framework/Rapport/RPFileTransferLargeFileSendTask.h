@class RPFileTransferItem, NSObject;
@protocol OS_dispatch_queue;

@interface RPFileTransferLargeFileSendTask : NSObject {
    BOOL _failed;
    unsigned int _sentFlags;
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _sha256Ctx;
    unsigned int _xid;
}

@property (nonatomic) int fileFD;
@property (retain, nonatomic) RPFileTransferItem *fileItem;
@property (nonatomic) BOOL needsRetry;
@property (nonatomic) int outstandingSends;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long remainingSize;
@property (nonatomic) unsigned long long taskID;

- (void).cxx_destruct;

@end
