@class NTKCSeparatorView;

@interface NTKCFaceDetailRowActionCell : NTKCDetailTableViewCell {
    NTKCSeparatorView *_topSeparator;
}

@property (nonatomic) BOOL showsTopSeparator;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (double)rowHeight;
- (void)layoutSubviews;

@end
