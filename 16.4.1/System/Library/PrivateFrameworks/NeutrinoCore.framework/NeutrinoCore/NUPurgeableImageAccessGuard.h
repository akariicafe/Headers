@class NURegion;
@protocol NUPurgeableImage;

@interface NUPurgeableImageAccessGuard : NSObject {
    NURegion *_accessRegion;
    id<NUPurgeableImage> _accessImage;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)_endAccess;
- (void)_beginAccess;
- (id)initWithRegion:(id)a0 image:(id)a1;

@end
