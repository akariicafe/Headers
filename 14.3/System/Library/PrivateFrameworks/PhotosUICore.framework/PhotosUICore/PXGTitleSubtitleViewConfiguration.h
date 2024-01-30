@class NSString, PXTitleSubtitleLabelSpec;

@interface PXGTitleSubtitleViewConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) PXTitleSubtitleLabelSpec *spec;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
