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

- (BOOL)isCancelled;
- (void).cxx_destruct;
- (void)closeResourceAtPath:(id)a0;
- (void)commitDataAtPath:(id)a0;
- (id)copyResourceWithName:(id)a0 type:(int)a1;
- (id)initWithClient:(const void *)a0 andCallBacks:(struct { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a1;
- (BOOL)isProgressive;
- (void)pushCssToPath:(id)a0;
- (void)pushData:(id)a0 toPath:(id)a1;
- (void)pushText:(id)a0 toPath:(id)a1;

@end
