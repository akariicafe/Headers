@class NSString, UIImage;

@interface SeymourUI.RemoveBookmarkShareSheetActivity : UIActivity {
    void /* unknown type, empty encoding */ bookmarkClient;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ workoutIdentifier;
}

@property (class, nonatomic, readonly) long long activityCategory;

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTitle;
@property (nonatomic, readonly) UIImage *activityImage;

- (id)init;
- (void).cxx_destruct;
- (void)prepareWithActivityItems:(id)a0;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;

@end
