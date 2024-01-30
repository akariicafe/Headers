@class CIContext;

@interface CIVNDetector : CIDetector {
    CIContext *context;
}

- (id)initWithContext:(id)a0 options:(id)a1;
- (void)dealloc;
- (id)featuresInImage:(id)a0 withContext:(id)a1;

@end
