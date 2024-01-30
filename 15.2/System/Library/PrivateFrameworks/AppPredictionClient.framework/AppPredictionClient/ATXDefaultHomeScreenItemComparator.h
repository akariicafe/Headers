@class NSArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemComparator : NSObject

@property (retain) NSArray *galleryItems;
@property (retain) ATXDefaultWidgetStack *defaultStack;

- (unsigned long long)rankOfWidgetSuggestedInGallery:(id)a0;
- (void).cxx_destruct;
- (BOOL)isStackDefaultStack:(id)a0;
- (void)loadDefaultItemsWithCompletionHandler:(id /* block */)a0;

@end
