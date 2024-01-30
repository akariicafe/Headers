@class NSArray, CNPropertyGroupItem;
@protocol CNPropertyActionDelegate;

@interface CNPropertyAction : CNContactAction

@property (weak, nonatomic) id<CNPropertyActionDelegate> delegate;
@property (copy, nonatomic) NSArray *propertyItems;
@property (readonly, nonatomic) CNPropertyGroupItem *propertyItem;

+ (void)performDefaultActionForItem:(id)a0 sender:(id)a1;

- (id)initWithContact:(id)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction;
- (void)performActionWithSender:(id)a0;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (id)initWithContact:(id)a0 propertyItem:(id)a1;
- (id)initWithContact:(id)a0 propertyItems:(id)a1;
- (void)presentDisambiguationAlertWithSender:(id)a0;

@end
