@class NSString, NSMutableDictionary, BRCSharedServerZone;

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}

@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;

- (void).cxx_destruct;
- (void)addAcceptOperation:(id)a0 forItemID:(id)a1;
- (id)asSharedClientZone;
- (void)removeAllShareAcceptationSidefaults;
- (id)rootItemID;
- (void)setServerZone:(id)a0;
- (id)shareAcceptOperationForItemID:(id)a0;
- (id)shareAcceptationSidefaultEnumerator;

@end
