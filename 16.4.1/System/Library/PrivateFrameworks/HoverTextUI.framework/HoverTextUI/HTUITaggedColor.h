@class UIColor, NSString;

@interface HTUITaggedColor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *localizedName;

+ (id)color:(id)a0 identifier:(id)a1;
+ (id)makeFromData:(id)a0;
+ (id)makeFromData:(id)a0 withOpacity:(double)a1;
+ (id)userPickableColors;

- (void)encodeWithCoder:(id)a0;
- (id)dataRepresentation;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
