@class NSArray, UIImageView, UITextField, UIView, NSString;

@interface HUFaceRecognitionAddPersonSearchBar : UIView <HUSearchBar>

@property (retain, nonatomic) NSArray *constraints;
@property (readonly, nonatomic) UIView *separatorView;
@property (readonly, nonatomic) UIImageView *faceCropView;
@property (readonly, nonatomic) UITextField *searchTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)requiresConstraintBasedLayout;

@end
