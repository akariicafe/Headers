@class NSMutableArray, CNPropertyGroupItem;

@interface CNLabelPickerController : CNPickerController

@property (retain) NSMutableArray *labelsToDeleteOnCommit;
@property (readonly, weak, nonatomic) CNPropertyGroupItem *item;

- (id)titleForPickerItem:(id)a0;
- (void)pickedItem:(id)a0;
- (id)initForPropertyItem:(id)a0;
- (void)removeCustomItem:(id)a0;
- (void).cxx_destruct;

@end
