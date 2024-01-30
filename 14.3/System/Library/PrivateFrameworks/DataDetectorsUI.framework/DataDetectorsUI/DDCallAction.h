@interface DDCallAction : DDTelephoneNumberAction

+ (BOOL)isAvailable;
+ (id)callProvider;

- (double)_systemFontSize;
- (BOOL)isEmail;
- (id)localizedName;
- (int)interactionType;
- (id)notificationTitle;
- (long long)TTYType;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (id)localizedCallStringForName:(id)a0 usingCallRelay:(BOOL)a1;
- (BOOL)_titleFitsInActionSheet:(id)a0;
- (id)notificationTitleTargetString;
- (id)dialRequestWithProvider:(id)a0;
- (id)dialRequest;

@end
