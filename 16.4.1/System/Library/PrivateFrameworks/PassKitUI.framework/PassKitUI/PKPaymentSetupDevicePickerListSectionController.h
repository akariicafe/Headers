@class NSArray, NSString, UIImage, UICollectionViewCellRegistration;
@protocol PKPaymentSetupDevicePickerListSectionControllerDelegate;

@interface PKPaymentSetupDevicePickerListSectionController : PKDynamicListSectionController {
    NSArray *_items;
    UIImage *_cardImage;
    NSString *_title;
    NSString *_subtitle;
}

@property (retain, nonatomic) UICollectionViewCellRegistration *cellRegistration;
@property (weak, nonatomic) id<PKPaymentSetupDevicePickerListSectionControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)didSelectItem:(id)a0;
- (void)configureSupplementaryRegistration:(id)a0 elementKind:(id)a1 sectionIdentifier:(id)a2;
- (id)decorateListCell:(id)a0 forRowItem:(id)a1;
- (id)defaultListLayout;
- (id)initWithWebServices:(id)a0 title:(id)a1 subtitle:(id)a2 image:(id)a3;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;
- (Class)supplementaryRegistrationClassForKind:(id)a0 sectionIdentifier:(id)a1;

@end
