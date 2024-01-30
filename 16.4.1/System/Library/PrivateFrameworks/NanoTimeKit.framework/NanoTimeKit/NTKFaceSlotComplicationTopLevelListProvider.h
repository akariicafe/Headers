@class NSArray, NSDictionary, NTKComplication, NSDiffableDataSourceSnapshot, NSHashTable, NSString;
@protocol NTKComplicationItem;

@interface NTKFaceSlotComplicationTopLevelListProvider : NSObject <NTKComplicationPickerListProvider>

@property (copy, nonatomic) NSArray *complications;
@property (copy, nonatomic) NSDictionary *complicationsBySectionIdentifier;
@property (retain, nonatomic) NTKComplication *selectedItemIgnoringMoreButton;
@property (retain, nonatomic) id<NTKComplicationItem> pickerSelectedItem;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@property (retain, nonatomic) NSHashTable *listProviderListeners;
@property (readonly, nonatomic) unsigned long long topLevelLimit;
@property (readonly, nonatomic) BOOL pickerListProviderSlotIsRich;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_buildDataIfNeeded;
- (void)addListProviderListener:(id)a0;
- (id)detailListProviderForSectionIdentifier:(id)a0;
- (id)initWithRichSlot:(BOOL)a0 complications:(id)a1 selectedComplication:(id)a2;
- (void)removeListProviderListener:(id)a0;

@end
