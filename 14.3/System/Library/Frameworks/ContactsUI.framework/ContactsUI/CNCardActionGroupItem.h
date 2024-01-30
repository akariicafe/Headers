@class NSMutableArray;

@interface CNCardActionGroupItem : CNCardGroupItem

@property (readonly, nonatomic) NSMutableArray *actions;

+ (id)actionGroupItemWithAction:(id)a0;
+ (id)actionGroupItemWithActions:(id)a0;

- (id)initWithAction:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (Class)cellClass;
- (void)addAction:(id)a0;

@end
