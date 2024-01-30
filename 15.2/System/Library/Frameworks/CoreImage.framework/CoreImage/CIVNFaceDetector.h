@class CIContext;

@interface CIVNFaceDetector : CIDetector

@property (readonly, retain) CIContext *context;

- (id)featuresInImage:(id)a0 options:(id)a1;
- (id)initWithContext:(id)a0 options:(id)a1;
- (void)dealloc;

@end
