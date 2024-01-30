@class UIImage;

@interface OITSUUIImageAutoreleasePoolGuard : NSObject {
    UIImage *mImage;
}

- (void)dealloc;
- (id)initWithUIImage:(id)a0;

@end
