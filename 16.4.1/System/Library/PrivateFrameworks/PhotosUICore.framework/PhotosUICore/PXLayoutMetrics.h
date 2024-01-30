@class NSString;

@interface PXLayoutMetrics : NSObject <NSCopying>

@property (nonatomic) struct CGSize { double width; double height; } referenceSize;
@property (readonly, nonatomic) NSString *diagnosticDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
