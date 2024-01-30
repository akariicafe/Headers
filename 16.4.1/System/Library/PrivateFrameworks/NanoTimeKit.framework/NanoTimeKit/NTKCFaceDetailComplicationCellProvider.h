@class UITableView;
@protocol NTKComplicationPickerListProvider;

@interface NTKCFaceDetailComplicationCellProvider : NSObject

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) id<NTKComplicationPickerListProvider> listProvider;

- (void).cxx_destruct;
- (id)initWithTableView:(id)a0 listProvider:(id)a1;
- (id)cellForItem:(id)a0 atIndexPath:(id)a1;

@end
