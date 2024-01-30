@interface DDCallAction : DDTelephoneNumberAction

+ (BOOL)isAvailable;
+ (id)callProvider;

- (int)interactionType;
- (id)localizedName;
- (id)subtitle;
- (id)notificationURL;
- (double)_systemFontSize;
- (BOOL)isEmail;
- (id)notificationTitle;
- (long long)TTYType;
- (BOOL)_titleFitsInActionSheet:(id)a0;
- (BOOL)canBePerformedByOpeningURL;
- (id)dialRequest;
- (id)dialRequestWithProvider:(id)a0;
- (id)localizedCallStringForName:(id)a0 usingCallRelay:(BOOL)a1;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitleTargetString;
- (void)performFromView:(id)a0;

@end
