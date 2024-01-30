@class NSProgress, NSMutableDictionary;

@interface _FPCopyFileStatus : NSObject

@property (retain) NSProgress *progress;
@property (retain) NSMutableDictionary *lastBytesCopiedByFile;

- (id)init;
- (void).cxx_destruct;
- (void)updateCopyingFile:(id)a0 state:(struct _copyfile_state { } *)a1;
- (void)beginCopyingFile:(id)a0 state:(struct _copyfile_state { } *)a1;
- (void)finishCopyingFile:(id)a0 state:(struct _copyfile_state { } *)a1;

@end
