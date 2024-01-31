@class NSString, TPInComingCallUISnapshotViewController;

@interface CNIncomingCallSnapshotViewController : UIViewController

@property (retain, nonatomic) NSString *nameString;
@property (retain, nonatomic) TPInComingCallUISnapshotViewController *snapshotViewController;

+ (id)fallbackTextForContact:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })horizontalNameLabelBoundingRectForName:(id)a0 window:(id)a1;
+ (void)incomingCallPlaceholderSnapshotForContact:(id)a0 windowScene:(id)a1 completionBlock:(id /* block */)a2;
+ (void)incomingCallSnapshotForConfiguration:(id)a0 contact:(id)a1 includingCallButtons:(BOOL)a2 windowScene:(id)a3 completionBlock:(id /* block */)a4;
+ (void)incomingCallSnapshotForConfiguration:(id)a0 style:(long long)a1 contact:(id)a2 fallbackText:(id)a3 windowScene:(id)a4 completionBlock:(id /* block */)a5;
+ (void)incomingCallSnapshotForConfiguration:(id)a0 titleText:(id)a1 includingCallButtons:(BOOL)a2 windowScene:(id)a3 completionBlock:(id /* block */)a4;
+ (void)incomingCallSnapshotForPosterArchiveData:(id)a0 contact:(id)a1 includingCallButtons:(BOOL)a2 windowScene:(id)a3 completionBlock:(id /* block */)a4;
+ (id)posterDisplayNameComponentsForContact:(id)a0;
+ (long long)styleIncludingCallButtons:(BOOL)a0 canShowPoster:(BOOL)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })verticalNameLabelBoundingRectForName:(id)a0 window:(id)a1;

- (void).cxx_destruct;

@end
