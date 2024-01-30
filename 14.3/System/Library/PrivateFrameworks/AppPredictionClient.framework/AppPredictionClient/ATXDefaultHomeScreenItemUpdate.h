@class ATXDefaultWidgetStack, NSArray;

@interface ATXDefaultHomeScreenItemUpdate : NSObject

@property (readonly, nonatomic) ATXDefaultWidgetStack *stack;
@property (readonly, nonatomic) ATXDefaultWidgetStack *todayStack;
@property (readonly, nonatomic) NSArray *smallWidgets;
@property (readonly, nonatomic) NSArray *mediumWidgets;
@property (readonly, nonatomic) NSArray *largeWidgets;
@property (readonly, nonatomic) BOOL shouldSuggestStackInGallery;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithStack:(id)a0 todayStack:(id)a1 smallWidgets:(id)a2 mediumWidgets:(id)a3 largeWidgets:(id)a4 shouldSuggestStackInGallery:(BOOL)a5;

@end
