@interface AXMScreenRecognitionCenter : NSObject

+ (id)sharedInstance;

- (id)_processVisionResult:(id)a0 options:(id)a1 coagulator:(id)a2;
- (struct { id x0; id x1; unsigned long long x2; })processFeatures:(id)a0;

@end
