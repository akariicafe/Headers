@class MFDAFolderChangeResult, MFConditionLock;

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer> {
    MFConditionLock *_conditionLock;
    MFDAFolderChangeResult *_result;
}

- (void).cxx_destruct;
- (id)init;
- (id)waitForResult;
- (void)folderChange:(id)a0 finishedWithStatus:(long long)a1 error:(id)a2;

@end
