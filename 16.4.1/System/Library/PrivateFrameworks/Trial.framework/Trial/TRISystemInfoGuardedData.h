@class TRISystemInfo;

@interface TRISystemInfoGuardedData : NSObject {
    BOOL isStale;
    TRISystemInfo *systemInfo;
}

- (void).cxx_destruct;

@end
