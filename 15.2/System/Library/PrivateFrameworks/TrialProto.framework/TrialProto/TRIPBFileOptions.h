@class NSString, NSMutableArray;

@interface TRIPBFileOptions : TRIPBMessage

@property (copy, nonatomic) NSString *javaPackage;
@property (nonatomic) BOOL hasJavaPackage;
@property (copy, nonatomic) NSString *javaOuterClassname;
@property (nonatomic) BOOL hasJavaOuterClassname;
@property (nonatomic) BOOL javaMultipleFiles;
@property (nonatomic) BOOL hasJavaMultipleFiles;
@property (nonatomic) BOOL javaGenerateEqualsAndHash;
@property (nonatomic) BOOL hasJavaGenerateEqualsAndHash;
@property (nonatomic) BOOL javaStringCheckUtf8;
@property (nonatomic) BOOL hasJavaStringCheckUtf8;
@property (nonatomic) int optimizeFor;
@property (nonatomic) BOOL hasOptimizeFor;
@property (copy, nonatomic) NSString *goPackage;
@property (nonatomic) BOOL hasGoPackage;
@property (nonatomic) BOOL ccGenericServices;
@property (nonatomic) BOOL hasCcGenericServices;
@property (nonatomic) BOOL javaGenericServices;
@property (nonatomic) BOOL hasJavaGenericServices;
@property (nonatomic) BOOL pyGenericServices;
@property (nonatomic) BOOL hasPyGenericServices;
@property (nonatomic) BOOL phpGenericServices;
@property (nonatomic) BOOL hasPhpGenericServices;
@property (nonatomic) BOOL deprecated;
@property (nonatomic) BOOL hasDeprecated;
@property (nonatomic) BOOL ccEnableArenas;
@property (nonatomic) BOOL hasCcEnableArenas;
@property (copy, nonatomic) NSString *objcClassPrefix;
@property (nonatomic) BOOL hasObjcClassPrefix;
@property (copy, nonatomic) NSString *csharpNamespace;
@property (nonatomic) BOOL hasCsharpNamespace;
@property (copy, nonatomic) NSString *swiftPrefix;
@property (nonatomic) BOOL hasSwiftPrefix;
@property (copy, nonatomic) NSString *phpClassPrefix;
@property (nonatomic) BOOL hasPhpClassPrefix;
@property (copy, nonatomic) NSString *phpNamespace;
@property (nonatomic) BOOL hasPhpNamespace;
@property (copy, nonatomic) NSString *phpMetadataNamespace;
@property (nonatomic) BOOL hasPhpMetadataNamespace;
@property (copy, nonatomic) NSString *rubyPackage;
@property (nonatomic) BOOL hasRubyPackage;
@property (retain, nonatomic) NSMutableArray *uninterpretedOptionArray;
@property (readonly, nonatomic) unsigned long long uninterpretedOptionArray_Count;

+ (id)descriptor;

@end
