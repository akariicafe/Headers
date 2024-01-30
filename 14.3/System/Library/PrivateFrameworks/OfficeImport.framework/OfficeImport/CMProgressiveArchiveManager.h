@class NSMutableString, NSMutableDictionary, NSDate;

@interface CMProgressiveArchiveManager : CMStylingArchiveManager {
    const void *mClient;
    struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *mCallBacks;
    NSMutableDictionary *mDataCache;
    BOOL mMainDataInited;
    NSDate *mStartDate;
    NSDate *mLastCommitDate;
    NSMutableString *mHtmlLogString;
}

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)pushText:(id)a0 toPath:(id)a1;
- (void)pushCssToPath:(id)a0;
- (void)commitDataAtPath:(id)a0;
- (void)closeResourceAtPath:(id)a0;
- (id)copyResourceWithName:(id)a0 type:(int)a1;
- (void)pushData:(id)a0 toPath:(id)a1;
- (BOOL)isProgressive;
- (id)initWithClient:(const void *)a0 andCallBacks:(struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;

@end
