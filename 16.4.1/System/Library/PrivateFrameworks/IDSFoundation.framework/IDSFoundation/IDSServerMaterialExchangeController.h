@class NSString, NSMutableSet, NSSet;
@protocol IDSServerMaterialExchangeDelegate;

@interface IDSServerMaterialExchangeController : NSObject {
    NSMutableSet *_currentlySentMaterials;
    NSSet *_desiredMaterials;
    BOOL _needsUpdate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _signDataBlock;
}

@property (readonly, weak) id<IDSServerMaterialExchangeDelegate> delegate;
@property (readonly) NSString *sessionID;

- (void)setNeedsUpdate;
- (void)update;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_buildMaterialInfoForDesiredMaterialDataNoSignature:(id)a0 materialType:(int)a1 materialID:(id)a2 sessionID:(id)a3;
- (id)_buildMaterialInfoForDesiredMaterialDataRequireSignature:(id)a0 materialType:(int)a1 materialID:(id)a2 sessionID:(id)a3;
- (id)buildMaterialInfoForDesiredMaterialData:(id)a0 materialType:(int)a1 materialID:(id)a2 sessionID:(id)a3 requireSign:(BOOL)a4;
- (id)currentlySentMaterials;
- (id)desiredMaterials;
- (void)invalidateMaterialsInArray:(id)a0;
- (void)invalidateMaterialsInSet:(id)a0;
- (void)markMaterialsInArrayAsSent:(id)a0;
- (void)markMaterialsInSetAsSent:(id)a0;
- (id)materialProtosForDesiredMaterials:(id)a0 failures:(id)a1;
- (id)pendingMaterials;
- (void)setDesiredMaterialsForSession:(id)a0 materials:(id)a1 signer:(id /* block */)a2;

@end
