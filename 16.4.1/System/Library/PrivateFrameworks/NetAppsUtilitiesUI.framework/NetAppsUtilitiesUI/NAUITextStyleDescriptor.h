@class NSString;

@interface NAUITextStyleDescriptor : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *textStyle;
@property (readonly, nonatomic) unsigned int symbolicTraits;
@property (readonly, nonatomic) BOOL allowsAccessibilitySizes;
@property (readonly, nonatomic) BOOL allowsSmallSizes;

+ (id)defaultFontForTextStyleDescriptor:(id)a0;
+ (id)descriptorWithTextStyle:(id)a0;
+ (id)na_identity;
+ (id)fontWithTextStyleDescriptor:(id)a0;

- (id)initWithTextStyle:(id)a0 symbolicTraits:(unsigned int)a1 allowsAccessibilitySizes:(BOOL)a2 allowsSmallSizes:(BOOL)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptorByDisallowingSmallSizes;
- (id)descriptorByAddingSymbolicTraits:(unsigned int)a0 removingSymbolicTraits:(unsigned int)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)descriptorByDisallowingAccessibilitySizes;
- (id)description;
- (void).cxx_destruct;

@end
