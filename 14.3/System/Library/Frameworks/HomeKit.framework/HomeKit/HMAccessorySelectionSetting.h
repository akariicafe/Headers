@class NSArray, NSString;

@interface HMAccessorySelectionSetting : HMAccessorySetting <_HMAccesorySettingDelegate>

@property (readonly, copy) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setting:(id)a0 didAddConstraint:(id)a1;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2;
- (id)initWithKey:(id)a0 properties:(unsigned long long)a1 value:(id)a2 items:(id)a3;
- (void)addItem:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeItem:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithInternal:(id)a0;

@end
