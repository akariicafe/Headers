@class NSMutableArray;

@interface CNCardActionGroupItem : CNCardGroupItem

@property (readonly, nonatomic) NSMutableArray *actions;

+ (id)actionGroupItemWithAction:(id)a0;
+ (id)actionGroupItemWithActions:(id)a0;

- (void)addAction:(id)a0;
- (Class)cellClass;
- (id)initWithAction:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
