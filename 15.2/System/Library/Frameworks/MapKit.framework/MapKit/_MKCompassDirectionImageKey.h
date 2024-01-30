@class NSString;

@interface _MKCompassDirectionImageKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *headingString;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) long long compassViewStyle;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 headingString:(id)a1 compassViewStyle:(long long)a2;

@end
