@interface VUILibraryMetrics : NSObject

+ (id)getMediaEntityContentType:(id)a0;
+ (id)getMediaItemContentType:(id)a0;
+ (id)pageStringForEntityType:(id)a0;
+ (id)pageStringForLibraryCategoryType:(long long)a0;
+ (id)pageStringForLibraryCellType:(long long)a0;
+ (id)pageStringForLibraryShelfType:(long long)a0;
+ (void)recordClickOnMediaEntity:(id)a0;
+ (void)recordPageEventWithPageId:(id)a0 andPageType:(id)a1;
+ (void)recordPageEventWithPageType:(id)a0;
+ (void)recordPlayOfMediaEntity:(id)a0 isLaunchingExtras:(BOOL)a1;
+ (void)recordPlayOfMediaItem:(id)a0;

@end
