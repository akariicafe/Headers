@class UIImage;

@interface TSUUIImageAutoreleasePoolGuard : NSObject {
    UIImage *mImage;
}

- (void)dealloc;
- (id)initWithUIImage:(id)a0;

@end
