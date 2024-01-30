@class WDPicture;

@interface WMPictureMapper : CMDrawableMapper {
    WDPicture *wdPicture;
}

- (void).cxx_destruct;
- (void)mapAt:(id)a0 withState:(id)a1;
- (void)setBoundingBox;
- (id)initWithWDPicture:(id)a0 parent:(id)a1;
- (void)mapBounds;

@end
