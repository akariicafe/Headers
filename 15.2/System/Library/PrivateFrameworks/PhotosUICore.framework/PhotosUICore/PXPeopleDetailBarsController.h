@class UIButton, PHPerson;

@interface PXPeopleDetailBarsController : PXPhotosDetailsBarsController

@property (retain, nonatomic) UIButton *peopleTitleView;
@property (retain, nonatomic) PHPerson *person;

- (void).cxx_destruct;
- (id)createTitleView;
- (id)createAssetActionManager;

@end
