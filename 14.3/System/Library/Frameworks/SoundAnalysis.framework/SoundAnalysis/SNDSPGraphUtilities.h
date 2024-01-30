@interface SNDSPGraphUtilities : NSObject

+ (BOOL)stopRecordingBoxesInGraph:(id)a0;
+ (BOOL)startRecordingFirstBoxInGraph:(id)a0 toDirectory:(id)a1 withFileName:(id)a2 error:(id *)a3;
+ (BOOL)startRecordingWithBoxRecordingInfos:(id)a0 inGraph:(id)a1 toDirectory:(id)a2 error:(id *)a3;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 toDirectory:(id)a2 error:(id *)a3;
+ (BOOL)startInjectingBoxes:(id)a0 inGraph:(id)a1 error:(id *)a2;
+ (BOOL)stopInjectingBoxesInGraph:(id)a0;

@end
