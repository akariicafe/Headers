@class NSString;

@interface PXZoomableInlineHeaderViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long style;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL swapTitleAndSubtitle;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 swapTitleAndSubtitle:(BOOL)a2 style:(unsigned long long)a3;

@end
