@class SBDisplayItem, SBAppLayout;

@interface _SBAppSwitcherSnapshotCacheKey : NSObject <NSCopying> {
    unsigned long long _hash;
}

@property (readonly, nonatomic) SBAppLayout *appLayout;
@property (readonly, nonatomic) SBDisplayItem *displayItem;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDisplayItem:(id)a0 inAppLayout:(id)a1;
- (void).cxx_destruct;

@end
