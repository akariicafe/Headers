@class UIImage, UIImageView;

@interface BTSDeviceConfigDigitalCrownController : PSListItemsController {
    UIImage *_rotationImage;
    UIImageView *_rotationImageView;
}

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)listItemSelected:(id)a0;
- (id)getRotationImageFileName:(long long)a0;
- (void)setupTableViewHeader;
- (void)updateRotateImage:(long long)a0;

@end
