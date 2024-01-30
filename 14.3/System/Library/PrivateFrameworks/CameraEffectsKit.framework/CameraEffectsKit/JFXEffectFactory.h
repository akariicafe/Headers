@class NSObject;
@protocol JFXEffectFactoryDelegate;

@interface JFXEffectFactory : NSObject

@property (class, weak, nonatomic) NSObject<JFXEffectFactoryDelegate> *delegate;

+ (id)sharedInstance;

- (id)createEffectForType:(int)a0 fromID:(id)a1 withProperties:(id)a2;
- (void)effectCategoriesForType:(int)a0 completion:(id /* block */)a1;
- (BOOL)isStyleTransferEffectID:(id)a0;
- (id)styleTransferEffectIDs;
- (void)effectIDsForType:(int)a0 completion:(id /* block */)a1;
- (void)effectsForType:(int)a0 completion:(id /* block */)a1;
- (id)effectsForType:(int)a0 fromCategory:(id)a1;
- (id)createEffectContentDataSourceForEffectID:(id)a0 ofType:(int)a1;

@end
