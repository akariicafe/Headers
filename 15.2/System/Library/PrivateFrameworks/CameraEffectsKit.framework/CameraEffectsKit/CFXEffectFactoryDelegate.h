@class NSString;

@interface CFXEffectFactoryDelegate : NSObject <JFXEffectFactoryDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)CFX_filterEffectsWithFactory:(id)a0;
- (id)CFX_animojiEffectsWithFactory:(id)a0;
- (id)CFX_overlayEffectsWithFactory:(id)a0;
- (BOOL)CFX_disableExpensiveFilters;
- (BOOL)CFX_isExpensiveEffectID:(id)a0 withFactory:(id)a1;
- (BOOL)CFX_enoughPowerForStyleTransfer;
- (id)CFX_styleTransferEffectIDs;
- (void)effectFactory:(id)a0 effectIDsAvailableForType:(int)a1 completion:(id /* block */)a2;
- (id)styleTransferEffectIDsForFactory:(id)a0;
- (BOOL)effectFactory:(id)a0 isStyleTransferEffectID:(id)a1;
- (id)effectFactory:(id)a0 createEffectContentDataSourceForEffectID:(id)a1 ofType:(int)a2;
- (Class)JFXEffectClassForType:(int)a0;

@end
