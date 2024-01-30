@class NSArray, ATXDefaultWidgetStack;

@interface ATXDefaultHomeScreenItemComparator : NSObject

@property (retain) NSArray *galleryItems;
@property (retain) ATXDefaultWidgetStack *defaultStack;

- (BOOL)isStackDefaultStack:(id)a0;
- (void)loadDefaultItemsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (unsigned long long)rankOfWidgetSuggestedInGallery:(id)a0;

@end
