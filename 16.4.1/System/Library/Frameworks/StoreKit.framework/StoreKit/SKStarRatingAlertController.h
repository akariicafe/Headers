@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController {
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
}

@property (nonatomic) float rating;
@property (copy, nonatomic) id /* block */ completion;

+ (id)starRatingAlertController;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_ratingControlChanged:(id)a0;
- (void)_updateButtonState;
- (void)setupActionsWithBundle:(id)a0;

@end
