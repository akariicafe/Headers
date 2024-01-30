@class NSString, NSArray;

@interface WFChooseFromListIntent : INIntent

@property (copy, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSArray *originalItems;
@property (copy, nonatomic) NSArray *chosenItems;

@end
