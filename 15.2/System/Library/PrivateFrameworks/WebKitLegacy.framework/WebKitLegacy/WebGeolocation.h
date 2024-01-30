@class WebGeolocationPrivate;

@interface WebGeolocation : NSObject {
    WebGeolocationPrivate *_private;
}

- (void)dealloc;
- (id)_initWithWebCoreGeolocation:(void *)a0;
- (void)setIsAllowed:(BOOL)a0;

@end
