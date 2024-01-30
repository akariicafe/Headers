@class NSString, NSArray, NSMutableArray;
@protocol AXCCTextSizeDelegate;

@interface AXCCTextSizeHelper : NSObject {
    NSString *_categoryName;
    NSMutableArray *_apps;
}

@property (retain, nonatomic) NSString *categoryName;
@property (readonly, nonatomic) BOOL isPerAppAvailable;
@property (nonatomic) int state;
@property (readonly, nonatomic) BOOL canSelectApps;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSArray *appsNames;
@property (readonly, nonatomic) long long appsNumber;
@property (weak, nonatomic) id<AXCCTextSizeDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_updateSavedAppID:(id)a0 categoryName:(id)a1;
- (void)_refreshForegroundAppInfo;
- (void)_refreshPerAppCategoryName;
- (void)_resetAllPerAppCategoryNames;
- (id)_selectedAppSafely;
- (void)_setPerAppCategoryName:(id)a0;
- (void)refreshAppInfo;
- (void)refreshCategoryName;

@end
