@class PXTitleSubtitleLabelSpec, PXImageViewSpec;

@interface PXImageTitleSubtitleSpec : PXViewSpec

@property (retain, nonatomic) PXTitleSubtitleLabelSpec *titleSubtitleSpec;
@property (retain, nonatomic) PXImageViewSpec *imageSpec;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
