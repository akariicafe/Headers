@class UIImage, UIImageView;

@interface BTSDeviceConfigDigitalCrownController : PSListItemsController {
    UIImage *_rotationImage;
    UIImageView *_rotationImageView;
}

- (void).cxx_destruct;
- (void)listItemSelected:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupTableViewHeader;
- (id)getRotationImageFileName:(long long)a0;
- (void)updateRotateImage:(long long)a0;

@end
