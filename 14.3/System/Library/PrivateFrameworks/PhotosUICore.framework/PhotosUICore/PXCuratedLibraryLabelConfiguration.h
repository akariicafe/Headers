@class NSString;

@interface PXCuratedLibraryLabelConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
