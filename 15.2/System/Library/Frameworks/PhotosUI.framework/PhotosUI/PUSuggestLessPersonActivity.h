@class NSString;

@interface PUSuggestLessPersonActivity : PXActivity {
    NSString *_cachedImageName;
}

+ (long long)_activityStyle;
+ (long long)activityCategory;

- (id)activityType;
- (void).cxx_destruct;
- (id)activityTitle;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (void)performActivity;
- (id)_facesInCurrentAsset;
- (id)_personFromFace:(id)a0;

@end
