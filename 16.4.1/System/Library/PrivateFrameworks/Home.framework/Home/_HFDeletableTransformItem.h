@class NSString;

@interface _HFDeletableTransformItem : HFTransformItem <HFItemDeletionProtocol, HFHomeObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hf_canDeleteItem;
- (id)hf_deleteItem;

@end
