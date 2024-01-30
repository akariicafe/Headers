@interface RawDFDetectors : NSObject

+ (id)packDetectorsOutput:(const struct { int x0; float x1; float x2; BOOL x3; BOOL x4; BOOL x5; struct { } x6; } *)a0;
+ (void)resetDetectorsOutput:(struct { int x0; float x1; float x2; BOOL x3; BOOL x4; BOOL x5; struct { } x6; } *)a0;
+ (int)runDetectorsToOutput:(struct { int x0; float x1; float x2; BOOL x3; BOOL x4; BOOL x5; struct { } x6; } *)a0 withEv0:(id)a1 withEvm:(id)a2 withSRTuning:(id)a3 withDownSampleStage:(id)a4 withColorMatchStage:(id)a5 withMotionDetection:(id)a6 withgrayGhostDetection:(id)a7 withFlickerDetection:(id)a8;
+ (int)runMotionToOutput:(struct { int x0; float x1; float x2; BOOL x3; BOOL x4; BOOL x5; struct { } x6; } *)a0 withRefFrame:(id)a1 withOtherFrame:(id)a2 withPyramidBand:(unsigned long long)a3 withTuningParams:(const struct { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a4 withMotionDetection:(id)a5;
+ (int)unpackDetectorsOutput:(struct { int x0; float x1; float x2; BOOL x3; BOOL x4; BOOL x5; struct { } x6; } *)a0 fromDictionary:(id)a1;

@end
