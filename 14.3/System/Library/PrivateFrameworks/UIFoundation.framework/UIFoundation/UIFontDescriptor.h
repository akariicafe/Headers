@class NSString, NSDictionary, NSMutableDictionary;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_attributes;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
    id _reserved5;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *postscriptName;
@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } matrix;
@property (readonly, nonatomic) unsigned int symbolicTraits;
@property (readonly, nonatomic) NSDictionary *fontAttributes;

+ (id)preferredFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1 options:(unsigned long long)a2;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0 compatibleWithTraitCollection:(id)a1;
+ (id)defaultFontDescriptorWithTextStyle:(id)a0 addingSymbolicTraits:(unsigned int)a1 options:(unsigned long long)a2;
+ (id)_createMungledDictionary:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;
+ (id)fontDescriptorWithName:(id)a0 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (id)preferredFontDescriptorWithTextStyle:(id)a0;
+ (id)defaultFontDescriptorWithTextStyle:(id)a0;
+ (id)fontDescriptorWithFontAttributes:(id)a0;

- (id)objectForKey:(id)a0;
- (id)init;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_matrix;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)_NSAffineTransform;
- (id)_swapWithFontAttributes:(id)a0 options:(unsigned long long)a1;
- (id)initWithFontAttributes:(id)a0;
- (id)fontDescriptorWithSize:(double)a0;
- (id)_fontDescriptorWithMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)_visibleName;
- (id)fontDescriptorWithMatrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)fontDescriptorWithFace:(id)a0;
- (id)fontDescriptorWithFamily:(id)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_attributes;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (id)fontDescriptorWithDesign:(id)a0;
- (id)fontDescriptorWithSymbolicTraits:(unsigned int)a0 mask:(unsigned int)a1;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;

@end
