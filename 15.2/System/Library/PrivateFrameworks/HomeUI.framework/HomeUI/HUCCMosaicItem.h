@class HFItem;
@protocol HFHomeKitItemProtocol;

@interface HUCCMosaicItem : NSObject <HUCCMosaicOrderable>

@property (nonatomic) unsigned long long itemType;
@property (nonatomic) unsigned long long itemSize;
@property (nonatomic) double itemPriority;
@property (retain, nonatomic) HFItem<HFHomeKitItemProtocol> *baseItem;

- (void).cxx_destruct;
- (id)init;
- (id)initWithBaseItem:(id)a0;

@end
