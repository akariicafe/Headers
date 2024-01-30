@class NSString, UIFont;

@interface UICellAccessoryLabel : UICellAccessory

@property (readonly, copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_identifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (long long)_systemType;
- (void)encodeWithCoder:(id)a0;
- (long long)_systemTypePlacementForHeader:(BOOL)a0;

@end
