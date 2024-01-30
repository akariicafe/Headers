@interface PUBadgeInfoPromise : NSObject <NSCopying> {
    id /* block */ _countProvider;
}

@property (readonly, nonatomic) struct PXAssetBadgeInfo { unsigned long long badges; double duration; long long count; } badgeInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0 countProvider:(id /* block */)a1;
- (id)badgeInfoPromiseWithAdjustedBadges:(unsigned long long)a0;
- (id)initWithBadgeInfo:(struct PXAssetBadgeInfo { unsigned long long x0; double x1; long long x2; })a0;

@end
