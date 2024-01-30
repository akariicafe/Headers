@class AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputFigAssetWriterEndPassOperation : AVOperation {
    struct OpaqueFigAssetWriter { } *_figAssetWriter;
    int _trackID;
}

@property (readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass;

- (id)init;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { } *)a0 trackID:(int)a1;
- (void)_notifyWhetherMorePassesAreNeeded:(BOOL)a0 timeRanges:(id)a1 forTrackWithID:(int)a2;
- (BOOL)isAsynchronous;
- (void)start;

@end
