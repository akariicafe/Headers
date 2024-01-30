@class NSProgress, NSMutableDictionary;

@interface _FPCopyFileStatus : NSObject

@property (retain) NSProgress *progress;
@property (retain) NSMutableDictionary *lastBytesCopiedByFile;
@property int copyError;

- (id)init;
- (void).cxx_destruct;
- (void)beginCopyingFile:(id)a0 state:(struct _copyfile_state { } *)a1;
- (void)finishCopyingFile:(id)a0 state:(struct _copyfile_state { } *)a1;
- (void)updateCopyingFile:(id)a0 state:(struct _copyfile_state { } *)a1;

@end
