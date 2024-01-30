@interface AKSecureSerializationHelper : NSObject

+ (id)encodeColor:(id)a0;
+ (id)decodeColor:(id)a0;
+ (id)encodeFont:(id)a0;
+ (id)decodeFont:(id)a0;
+ (id)encodeTextAttributes:(id)a0;
+ (id)decodeTextAttributes:(id)a0;
+ (id)_callXPCServiceProxyWithInputData:(id)a0 andSelector:(SEL)a1;
+ (id)_encodeAttributedStringAsRTFData:(id)a0;
+ (id)_encodeTextAttributesAsRTFData:(id)a0;
+ (void)_decodeTextPropertiesForAnnotation:(id)a0 withSecureCoder:(id)a1;
+ (void)_unsafeLegacyDecodeTextPropertiesForAnnotation:(id)a0 withNonSecureCoder:(id)a1;
+ (id)dataForSecureCodingCompliantObject:(id)a0 withOptionalKey:(id)a1;
+ (id)secureCodingCompliantObjectForData:(id)a0 ofClasses:(id)a1 withOptionalKey:(id)a2;
+ (id)_decodeTextAttributesFromRTFData:(id)a0;
+ (id)_securelyConvertLegacyTextAttributeDataToRTFData:(id)a0;
+ (void)_decodeRTFTextPropertiesWithSecureCoder:(id)a0 annotationTextRTF:(id *)a1 typingAttributesRTF:(id *)a2;
+ (void)_decodeLegacyTextPropertiesWithSecureCoder:(id)a0 annotationTextRTF:(id *)a1 typingAttributesRTF:(id *)a2;
+ (id)_decodeAttributedStringFromRTFData:(id)a0;
+ (id)_securelyConvertLegacyAnnotationArchiveToRTFArchive:(id)a0;
+ (id)convertLegacyModelControllerArchive:(id)a0;
+ (void)encodeTextPropertiesOfAnnotation:(id)a0 withCoder:(id)a1;
+ (void)decodeTextPropertiesOfAnnotation:(id)a0 withSecureCoder:(id)a1;
+ (id)_unsafeLegacyDecodeTextAttributesFromData:(id)a0;

@end
