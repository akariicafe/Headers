@interface DOCThumbnailBatchingToken : NSObject {
    BOOL _invalidated;
}

- (void)dealloc;
- (void)_setInvalidated:(BOOL)a0;

@end
