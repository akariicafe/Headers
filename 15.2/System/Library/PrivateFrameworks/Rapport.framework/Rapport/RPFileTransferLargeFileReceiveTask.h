@class RPFileTransferItem, NSObject;
@protocol OS_dispatch_queue;

@interface RPFileTransferLargeFileReceiveTask : NSObject {
    struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } _sha256Ctx;
}

@property (nonatomic) int fileFD;
@property (retain, nonatomic) RPFileTransferItem *fileItem;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long taskID;

- (void).cxx_destruct;

@end
