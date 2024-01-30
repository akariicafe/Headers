@class WFChooseFromListItem;

@interface WFChooseFromListIntentResponse : INIntentResponse

@property (nonatomic) long long code;
@property (copy, nonatomic) WFChooseFromListItem *selectedItem;

- (id)initWithCode:(long long)a0 userActivity:(id)a1;

@end
