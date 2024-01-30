@interface MKTableViewCell : UITableViewCell {
    BOOL __mapkit_separatorStyleOverrideEnabled;
}

@property (nonatomic) BOOL _mapkit_forceSeparatorFrameToCGRectZero;
@property (nonatomic) long long _mapkit_separatorStyleOverride;

- (void)setSeparatorStyle:(long long)a0;
- (void)setSemanticContentAttribute:(long long)a0;
- (void)_mapkit_disableSeparatorStyleOverride;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;

@end
