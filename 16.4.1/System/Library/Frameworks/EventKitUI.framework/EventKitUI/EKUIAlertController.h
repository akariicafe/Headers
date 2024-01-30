@interface EKUIAlertController : UIAlertController {
    BOOL _prohibitsRotation;
}

@property (nonatomic) BOOL prohibitsRotation;

- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;

@end
