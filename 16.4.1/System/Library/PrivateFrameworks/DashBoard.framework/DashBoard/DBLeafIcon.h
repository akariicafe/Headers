@class FBSApplicationPlaceholder, DBApplicationInfo;

@interface DBLeafIcon : SBLeafIcon

@property (readonly, nonatomic) DBApplicationInfo *applicationInfo;
@property (retain, nonatomic) FBSApplicationPlaceholder *placeholder;

+ (Class)dataSourceClass;

- (id)initWithApplicationInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLaunchEnabled;

@end
