@class NTKCSeparatorView;

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {
    NTKCSeparatorView *_topSeparator;
}

@property (nonatomic) BOOL showsTopSeparator;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
