@class NSArray, NSString, NSDiffableDataSourceSnapshot, NSHashTable;
@protocol NTKComplicationItem;

@interface NTKFaceSlotComplicationDetailListProvider : NSObject <NTKComplicationPickerListProvider>

@property (copy, nonatomic) NSArray *complications;
@property (copy, nonatomic) NSDiffableDataSourceSnapshot *pickerListDataSourceSnapshot;
@property (retain, nonatomic) NSHashTable *listProviderListeners;
@property (readonly, nonatomic) id<NTKComplicationItem> pickerSelectedItem;
@property (readonly, nonatomic) BOOL pickerListProviderSlotIsRich;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_buildDataIfNeeded;
- (void)addListProviderListener:(id)a0;
- (id)initWithRichSlot:(BOOL)a0 complications:(id)a1 selectedComplication:(id)a2;
- (void)removeListProviderListener:(id)a0;

@end
