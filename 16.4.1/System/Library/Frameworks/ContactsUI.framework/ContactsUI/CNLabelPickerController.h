@class NSMutableArray, CNPropertyGroupItem;

@interface CNLabelPickerController : CNPickerController

@property (retain) NSMutableArray *labelsToDeleteOnCommit;
@property (readonly, weak, nonatomic) CNPropertyGroupItem *item;

- (void).cxx_destruct;
- (id)initForPropertyItem:(id)a0;
- (void)pickedItem:(id)a0;
- (void)removeCustomItem:(id)a0;
- (id)titleForPickerItem:(id)a0;

@end
