@class NSString;

@interface WFSwitchTableItem : WFCustomTableItem

@property (readonly, nonatomic) NSString *primaryText;
@property (readonly, nonatomic) NSString *secondaryText;

+ (id)itemWithPrimaryText:(id)a0 initialValue:(id)a1;
+ (id)itemWithPrimaryText:(id)a0 secondaryText:(id)a1 initialValue:(id)a2;

- (void).cxx_destruct;
- (void)configureCell:(id)a0;

@end
