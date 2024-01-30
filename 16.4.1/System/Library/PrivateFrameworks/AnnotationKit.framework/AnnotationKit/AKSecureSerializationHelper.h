@interface AKSecureSerializationHelper : NSObject

+ (id)_encodeTextAttributesAsRTFData:(id)a0;
+ (id)_decodeAttributedStringFromRTFData:(id)a0;
+ (void)_decodeRTFTextPropertiesWithSecureCoder:(id)a0 annotationTextRTF:(id *)a1 typingAttributesRTF:(id *)a2;
+ (id)_decodeTextAttributesFromRTFData:(id)a0;
+ (void)_decodeTextPropertiesForAnnotation:(id)a0 withSecureCoder:(id)a1;
+ (id)_encodeAttributedStringAsRTFData:(id)a0;
+ (id)dataForSecureCodingCompliantObject:(id)a0 withOptionalKey:(id)a1;
+ (id)decodeColor:(id)a0;
+ (id)decodeFont:(id)a0;
+ (id)decodeTextAttributes:(id)a0;
+ (void)decodeTextPropertiesOfAnnotation:(id)a0 withSecureCoder:(id)a1;
+ (id)encodeColor:(id)a0;
+ (id)encodeFont:(id)a0;
+ (id)encodeTextAttributes:(id)a0;
+ (void)encodeTextPropertiesOfAnnotation:(id)a0 withCoder:(id)a1;
+ (id)secureCodingCompliantObjectForData:(id)a0 ofClasses:(id)a1 withOptionalKey:(id)a2;

@end
