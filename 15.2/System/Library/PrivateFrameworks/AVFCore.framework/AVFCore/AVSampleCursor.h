@class AVSampleCursorInternal;

@interface AVSampleCursor : NSObject <NSCopying> {
    AVSampleCursorInternal *_sampleCursor;
}

+ (void)initialize;
+ (id)sampleCursorWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })decodeTimeStamp;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct OpaqueFigSampleCursor { } *)_figSampleCursor;
- (id)initWithFigSampleCursor:(struct OpaqueFigSampleCursor { } *)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByDecodeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(BOOL *)a1;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })stepByPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 wasPinned:(BOOL *)a1;
- (struct { long long x0; long long x1; })currentSampleStorageRange;
- (long long)stepInDecodeOrderByCount:(long long)a0;
- (long long)stepInPresentationOrderByCount:(long long)a0;
- (const struct opaqueCMFormatDescription { } *)copyCurrentSampleFormatDescription;
- (long long)comparePositionInDecodeOrderWithPositionOfCursor:(id)a0;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferForCurrentSampleReturningError:(id *)a0;
- (BOOL)samplesWithEarlierDecodeTimeStampsMayHaveLaterPresentationTimeStampsThanCursor:(id)a0;
- (BOOL)canProvideSampleBuffers;
- (BOOL)samplesWithLaterDecodeTimeStampsMayHaveEarlierPresentationTimeStampsThanCursor:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentSampleDuration;
- (struct opaqueCMSampleBuffer { } *)createSampleBufferFromCurrentSampleToEndCursor:(id)a0 error:(id *)a1;
- (struct { BOOL x0; BOOL x1; BOOL x2; })currentSampleSyncInfo;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; })currentSampleDependencyInfo;
- (struct { BOOL x0; long long x1; })currentSampleAudioDependencyInfo;
- (id)currentSampleDependencyAttachments;
- (id)currentChunkStorageURL;
- (struct { long long x0; long long x1; })currentChunkStorageRange;
- (struct { long long x0; BOOL x1; BOOL x2; BOOL x3; })currentChunkInfo;
- (long long)currentSampleIndexInChunk;
- (long long)samplesRequiredForDecoderRefresh;
- (void)dealloc;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })presentationTimeStamp;

@end
