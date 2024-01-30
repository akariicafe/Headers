@class _UIBoundingPathBitmap;

@interface _UIScreenComplexBoundingPathUtilities : _UIScreenBoundingPathUtilities {
    long long _type;
    _UIBoundingPathBitmap *_bitmap;
}

+ (BOOL)isScreenSupported:(id)a0;

- (void).cxx_destruct;
- (void)_loadBitmapForScreen:(id)a0 type:(long long)a1;
- (id)boundingPathForWindow:(id)a0;
- (id)initWithScreen:(id)a0;

@end
