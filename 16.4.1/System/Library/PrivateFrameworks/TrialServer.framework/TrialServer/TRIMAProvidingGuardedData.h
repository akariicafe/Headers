@class NSMutableArray, TRIMAAutoAsset;

@interface TRIMAProvidingGuardedData : NSObject {
    BOOL didDeferDuringMADownload;
    BOOL deferralHandlerInvalid;
    NSMutableArray *fetchSemaphores;
    BOOL cancelReceived;
    TRIMAAutoAsset *currentAsset;
}

- (id)description;
- (void).cxx_destruct;

@end
