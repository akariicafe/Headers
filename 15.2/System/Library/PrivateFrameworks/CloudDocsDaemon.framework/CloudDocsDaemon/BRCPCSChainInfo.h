@class BRFieldCKInfo, BRCItemID;

@interface BRCPCSChainInfo : NSObject

@property (readonly, nonatomic) BRCItemID *itemID;
@property (readonly, nonatomic) BRCItemID *parentID;
@property (readonly, nonatomic) BRFieldCKInfo *structuralCKInfo;
@property (readonly, nonatomic) BRFieldCKInfo *contentCKInfo;
@property (readonly, nonatomic) char itemType;
@property (readonly, nonatomic) unsigned int chainState;
@property (readonly, nonatomic) BOOL aliasTargetZoneIsShared;

- (void).cxx_destruct;
- (id)initWithItemID:(id)a0 parentID:(id)a1 structuralCKInfo:(id)a2 contentCKInfo:(id)a3 itemType:(char)a4 aliasTargetZoneIsShared:(BOOL)a5 chainState:(unsigned int)a6;

@end
