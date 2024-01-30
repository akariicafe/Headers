@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController {
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
}

@property (nonatomic) float rating;
@property (copy, nonatomic) id /* block */ completion;

+ (id)starRatingAlertController;

- (void)_updateButtonState;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_ratingControlChanged:(id)a0;
- (void)setupActionsWithBundle:(id)a0;

@end
