@class _UISSecureControlCategory, UISSlotStyle, NSString;

@interface _UISSecureControlSizeSpec : NSObject <NSCopying, NSSecureCoding> {
    NSString *_localization;
    union { unsigned short all; struct { unsigned char arrangeVertically : 1; unsigned char accessibilityContrast : 1; unsigned char displayScale : 3; unsigned char layoutDirection : 1; unsigned char legibilityWeight : 1; unsigned char preferredContentSizeCategory : 4; unsigned char userInterfaceIdiom : 3; } ; } _fields;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UISSecureControlCategory *category;
@property (readonly, nonatomic) UISSlotStyle *style;
@property (readonly, nonatomic) BOOL arrangeVertically;

+ (id)specWithStyle:(id)a0 tag:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEquivalentToStyle:(id)a0 tag:(id)a1;
- (id)initWithCategory:(id)a0 arrangeVertically:(BOOL)a1 accessibilityContrast:(unsigned long long)a2 displayScale:(unsigned char)a3 layoutDirection:(unsigned long long)a4 legibilityWeight:(unsigned long long)a5 localization:(id)a6 preferredContentSizeCategory:(unsigned long long)a7 userInterfaceIdiom:(unsigned long long)a8;

@end
