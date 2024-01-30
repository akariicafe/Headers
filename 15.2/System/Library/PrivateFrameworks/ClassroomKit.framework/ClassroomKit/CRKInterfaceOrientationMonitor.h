@class FBSOrientationObserver, NSMutableArray;

@interface CRKInterfaceOrientationMonitor : NSObject {
    FBSOrientationObserver *mObserver;
    NSMutableArray *mCompletionBlocks;
    BOOL mIsWaitingForFirstUpdate;
}

@property (nonatomic) unsigned long long interfaceOrientation;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id /* block */)makeUpdateHandler;
- (void)updateInterfaceOrientationWithNotification:(id)a0;
- (void)updateInterfaceOrientationWithBSOrientation:(long long)a0;
- (unsigned long long)DMFInterfaceOrientationFromBSInterfaceOrientation:(long long)a0;
- (void)updateInterfaceOrientationWithDMFOrientation:(unsigned long long)a0;
- (void)interfaceOrientationWithCompletion:(id /* block */)a0;

@end
