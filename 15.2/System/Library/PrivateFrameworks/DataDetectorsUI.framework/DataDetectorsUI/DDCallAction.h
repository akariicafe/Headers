@interface DDCallAction : DDTelephoneNumberAction

+ (BOOL)isAvailable;
+ (id)callProvider;

- (id)localizedName;
- (BOOL)isEmail;
- (id)subtitle;
- (double)_systemFontSize;
- (id)notificationURL;
- (long long)TTYType;
- (id)notificationTitle;
- (int)interactionType;
- (void)performFromView:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)notificationIconBundleIdentifier;
- (id)localizedCallStringForName:(id)a0 usingCallRelay:(BOOL)a1;
- (BOOL)_titleFitsInActionSheet:(id)a0;
- (id)notificationTitleTargetString;
- (id)dialRequestWithProvider:(id)a0;
- (id)dialRequest;

@end
