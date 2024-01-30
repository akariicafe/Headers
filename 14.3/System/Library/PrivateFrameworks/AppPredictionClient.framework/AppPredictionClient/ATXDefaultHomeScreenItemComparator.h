@class NSArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemComparator : NSObject

@property (retain) NSArray *galleryItems;
@property (retain) ATXDefaultWidgetStack *defaultStack;

- (void).cxx_destruct;
- (void)loadDefaultItemsWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)rankOfWidgetSuggestedInGallery:(id)a0;
- (BOOL)isStackDefaultStack:(id)a0;

@end
