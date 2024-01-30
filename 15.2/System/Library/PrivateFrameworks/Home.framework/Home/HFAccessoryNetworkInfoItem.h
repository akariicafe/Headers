@interface HFAccessoryNetworkInfoItem : HFAccessoryInfoItem

@property (nonatomic) unsigned long long networkInfoType;

- (id)initWithAccessory:(id)a0;
- (unsigned long long)infoType;
- (id)_subclass_updateWithOptions:(id)a0;
- (void)toggleNetworkInfoType;
- (unsigned long long)_nextNetworkInfoType;
- (id)_localizedTitleForType:(unsigned long long)a0;
- (id)_localizedDescriptionForType:(unsigned long long)a0;
- (BOOL)_hiddenForType:(unsigned long long)a0;

@end
