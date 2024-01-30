@interface _UIImagePreparedCGImageContent : _UIImageCGImageContent {
    void *_renderRef;
}

- (void)dealloc;
- (BOOL)isPreparedCGImage;

@end
