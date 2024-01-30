@interface UICTFontDescriptor : UIFontDescriptor

+ (id)fontDescriptorWithName:(id)a0 matrix:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
+ (id)fontDescriptorWithFontAttributes:(id)a0;
+ (id)fontDescriptorWithName:(id)a0 size:(double)a1;

- (BOOL)allowsWeakReference;
- (unsigned long long)retainCount;
- (BOOL)retainWeakReference;
- (id)retain;
- (id)fontDescriptorByAddingAttributes:(id)a0;
- (id)matchingFontDescriptorWithMandatoryKeys:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)matchingFontDescriptorsWithMandatoryKeys:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)fontAttributes;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
