@class CPAlertAction, NSUUID, NSArray, UIImage, CPImageSet;
@protocol CPNavigationAlertUpdating;

@interface CPNavigationAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *identifier;
@property (weak, nonatomic) id<CPNavigationAlertUpdating> navigationAlertUpdateTarget;
@property (readonly, copy, nonatomic) NSArray *titleVariants;
@property (readonly, copy, nonatomic) NSArray *subtitleVariants;
@property (readonly, copy, nonatomic) CPImageSet *imageSet;
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly, nonatomic) CPAlertAction *primaryAction;
@property (readonly, nonatomic) CPAlertAction *secondaryAction;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithTitleVariants:(id)a0 subtitleVariants:(id)a1 imageSet:(id)a2 primaryAction:(id)a3 secondaryAction:(id)a4 duration:(double)a5;
- (id)initWithTitleVariants:(id)a0 subtitleVariants:(id)a1 imageSet:(id)a2 primaryAction:(id)a3 secondaryAction:(id)a4 duration:(double)a5;
- (id)initWithTitleVariants:(id)a0 subtitleVariants:(id)a1 image:(id)a2 primaryAction:(id)a3 secondaryAction:(id)a4 duration:(double)a5;
- (void)updateTitleVariants:(id)a0 subtitleVariants:(id)a1;

@end
