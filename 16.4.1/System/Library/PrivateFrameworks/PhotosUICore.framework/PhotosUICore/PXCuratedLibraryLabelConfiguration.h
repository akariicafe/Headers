@class NSString, UIColor;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) UIColor *textColor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
