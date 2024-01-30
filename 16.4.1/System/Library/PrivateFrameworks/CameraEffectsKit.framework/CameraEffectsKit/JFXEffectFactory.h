@class NSObject;
@protocol JFXEffectFactoryDelegate;

@interface JFXEffectFactory : NSObject

@property (class, weak, nonatomic) NSObject<JFXEffectFactoryDelegate> *delegate;

+ (id)sharedInstance;

- (id)createEffectContentDataSourceForEffectID:(id)a0 ofType:(int)a1;
- (id)createEffectForType:(int)a0 fromID:(id)a1 withProperties:(id)a2;
- (void)defaultPickerItemForType:(int)a0 completion:(id /* block */)a1;
- (void)effectCategoriesForPickerItem:(id)a0 completion:(id /* block */)a1;
- (void)effectCategoriesForType:(int)a0 completion:(id /* block */)a1;
- (void)effectIDsForPickerItem:(id)a0 completion:(id /* block */)a1;
- (void)effectIDsForType:(int)a0 completion:(id /* block */)a1;
- (void)effectsForType:(int)a0 completion:(id /* block */)a1;
- (id)effectsForType:(int)a0 fromCategory:(id)a1;
- (void)effectsForType:(int)a0 pickerItem:(id)a1 completion:(id /* block */)a2;
- (void)fetchPickerItems:(id /* block */)a0;
- (BOOL)isStyleTransferEffectID:(id)a0;
- (id)noneEffectIDForType:(int)a0;
- (void)pickerItemForCategory:(id)a0 completion:(id /* block */)a1;
- (id)styleTransferEffectIDs;

@end
