@interface ASDDSPGraphUtilities : NSObject

+ (BOOL)stopRecordingBoxesInGraph:(id)a0;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 toDirectory:(id)a2 error:(id *)a3;
+ (BOOL)startInjectingBoxes:(id)a0 inGraph:(id)a1 error:(id *)a2;
+ (BOOL)stopInjectingBoxesInGraph:(id)a0;
+ (BOOL)startRecordingBoxes:(id)a0 inGraph:(id)a1 fromStream:(id)a2 toDirectory:(id)a3 withType:(long long)a4 error:(id *)a5;
+ (BOOL)startRecordingAllBoxesInGraph:(id)a0 fromStream:(id)a1 toDirectory:(id)a2 withType:(long long)a3 error:(id *)a4;

@end
