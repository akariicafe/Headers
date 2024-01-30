@class NSString;

@interface PKColor : NSObject <NSSecureCoding, NSCopying> {
    double _red;
    double _green;
    double _blue;
    double _alpha;
    struct CGColor { } *_colorRef;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) NSString *string;
@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, nonatomic) struct CGColor { } *CGColor;

+ (id)colorWithR:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;
+ (id)colorWithH:(double)a0 S:(double)a1 B:(double)a2 A:(double)a3;
+ (id)colorFromString:(id)a0;

- (struct CGColor { } *)_newCGColor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (double)luminance;
- (void)encodeWithCoder:(id)a0;

@end
