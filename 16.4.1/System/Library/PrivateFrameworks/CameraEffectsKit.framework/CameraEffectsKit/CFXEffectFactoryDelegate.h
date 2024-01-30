@class NSString;

@interface CFXEffectFactoryDelegate : NSObject <JFXEffectFactoryDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)CFX_animojiEffectsWithFactory:(id)a0;
- (id)CFX_filterEffectsWithFactory:(id)a0;
- (BOOL)CFX_isExpensiveEffectID:(id)a0 withFactory:(id)a1;
- (BOOL)CFX_enoughPowerForStyleTransfer;
- (BOOL)CFX_disableExpensiveFilters;
- (id)CFX_overlayEffectsWithFactory:(id)a0;
- (id)CFX_styleTransferEffectIDs;
- (Class)JFXEffectClassForType:(int)a0;
- (id)effectFactory:(id)a0 createEffectContentDataSourceForEffectID:(id)a1 ofType:(int)a2;
- (void)effectFactory:(id)a0 effectIDsAvailableForType:(int)a1 completion:(id /* block */)a2;
- (BOOL)effectFactory:(id)a0 isStyleTransferEffectID:(id)a1;
- (id)styleTransferEffectIDsForFactory:(id)a0;

@end
