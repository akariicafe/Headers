@class NSString, UIImage;

@interface SeymourUI.RemoveFromWatchShareSheetActivity : UIActivity {
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ workoutIdentifier;
}

@property (class, nonatomic, readonly) long long activityCategory;

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) UIImage *activityImage;

- (id)init;
- (void).cxx_destruct;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)prepareWithActivityItems:(id)a0;

@end
