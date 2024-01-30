@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>

@property (retain, nonatomic) id placeholderItem;
@property (retain, nonatomic) id providedItem;
@property (copy, nonatomic, setter=_setActivityType:) NSString *activityType;
@property (readonly, nonatomic) id item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)main;
- (id)init;
- (void).cxx_destruct;
- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (id)initWithPlaceholderItem:(id)a0;
- (BOOL)_shouldExecuteItemOperationForActivity:(id)a0;

@end
