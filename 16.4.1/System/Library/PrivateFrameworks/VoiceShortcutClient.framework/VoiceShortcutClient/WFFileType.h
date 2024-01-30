@class NSString, UTType, WFImage, NSDictionary, NSArray;

@interface WFFileType : WFType

@property (readonly, nonatomic) WFImage *documentIcon;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) UTType *utType;
@property (readonly, nonatomic, getter=isDeclared) BOOL declared;
@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property (readonly, nonatomic, getter=isCoreType) BOOL coreType;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSDictionary *typeDeclaration;
@property (readonly, nonatomic) NSArray *typesConformedTo;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *pboardType;
@property (readonly, nonatomic) NSString *OSType;

+ (BOOL)supportsSecureCoding;
+ (id)typeWithString:(id)a0;
+ (id)typesFromUTTypes:(id)a0 excludingType:(id)a1;
+ (id)typeWithUTType:(id)a0;
+ (id)fileTypeCache;
+ (id)typeForTagClass:(id)a0 tag:(id)a1;
+ (id)typeFromFileExtension:(id)a0;
+ (id)typeFromFilename:(id)a0;
+ (id)typeFromMIMEType:(id)a0;
+ (id)typeFromPasteboardType:(id)a0;
+ (id)typeWithUTType:(id)a0 string:(id)a1;
+ (id)typesForTagClass:(id)a0 tag:(id)a1 conformingToType:(id)a2;
+ (id)typesFromStrings:(id)a0;
+ (id)typesFromUTTypes:(id)a0;

- (BOOL)isEqualToString:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)conformsToType:(id)a0;
- (id)initWithUTType:(id)a0;
- (id)conformingTypesWithFileExtension:(id)a0;
- (id)conformingTypesWithMIMEType:(id)a0;
- (id)conformingTypesWithTagClass:(id)a0 tag:(id)a1;
- (BOOL)conformsToString:(id)a0;
- (BOOL)conformsToUTType:(id)a0;
- (BOOL)conformsToUTTypes:(id)a0;
- (id)initWithUTType:(id)a0 string:(id)a1;
- (BOOL)isEqualToType:(id)a0;
- (BOOL)isEqualToUTType:(id)a0;

@end
