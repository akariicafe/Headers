@class NSArray;

@interface SKUIShareTemplateViewElement : SKUIViewElement

@property (readonly, nonatomic) NSArray *activities;

- (id)activityForUIActivityType:(id)a0;
- (id)activityForShareSheetActivityType:(id)a0;

@end
