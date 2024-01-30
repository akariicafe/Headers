@class SBDisplayItem, XBApplicationSnapshot, SBAppLayout;

@interface _SBAppSwitcherSnapshotImageCacheRequest : NSObject

@property (readonly, nonatomic) unsigned long long sequenceID;
@property (nonatomic) BOOL loadFullSizeSnapshot;
@property (retain, nonatomic) SBAppLayout *appLayout;
@property (retain, nonatomic) SBDisplayItem *displayItem;
@property (retain, nonatomic) XBApplicationSnapshot *snapshot;

- (void).cxx_destruct;
- (id)initWithSequenceID:(unsigned long long)a0;
- (id)description;

@end
