@class NSString, UIColor;

@interface PKMultiKeyValueCellKeyValueSource : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (nonatomic, getter=isBold) BOOL bold;
@property (retain, nonatomic) UIColor *subtitleTextColor;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;

@end
