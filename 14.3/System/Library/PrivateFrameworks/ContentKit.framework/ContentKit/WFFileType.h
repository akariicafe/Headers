@class NSString, NSDictionary, WFImage, NSArray;

@interface WFFileType : WFType

@property (readonly, nonatomic) WFImage *documentIcon;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) const struct __CFString { } *utType;
@property (readonly, nonatomic, getter=isDeclared) BOOL declared;
@property (readonly, nonatomic, getter=isDynamic) BOOL dynamic;
@property (readonly, nonatomic) NSString *typeDescription;
@property (readonly, nonatomic) NSDictionary *typeDeclaration;
@property (readonly, nonatomic) NSArray *typesConformedTo;
@property (readonly, nonatomic) NSString *fileExtension;
@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) NSString *pboardType;
@property (readonly, nonatomic) NSString *OSType;

+ (BOOL)supportsSecureCoding;
+ (id)typeWithString:(id)a0;
+ (id)typeFromFilename:(id)a0;
+ (id)typesFromUTTypes:(id)a0;
+ (id)typeWithUTType:(const struct __CFString { } *)a0;
+ (id)typeFromMIMEType:(id)a0;
+ (id)typesForTagClass:(const struct __CFString { } *)a0 tag:(const struct __CFString { } *)a1 conformingToType:(const struct __CFString { } *)a2;
+ (id)cachedFileTypeForUTType:(const struct __CFString { } *)a0;
+ (id)typeWithUTType:(const struct __CFString { } *)a0 string:(id)a1;
+ (id)typeFromFileExtension:(id)a0;
+ (id)typeFromPasteboardType:(id)a0;
+ (id)typesFromUTTypes:(id)a0 excludingType:(id)a1;
+ (id)typeForTagClass:(const struct __CFString { } *)a0 tag:(const struct __CFString { } *)a1;

- (BOOL)isEqualToString:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)conformsToType:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)conformsToUTType:(const struct __CFString { } *)a0;
- (id)initWithUTType:(const struct __CFString { } *)a0;
- (id)initWithUTType:(const struct __CFString { } *)a0 string:(id)a1;
- (BOOL)isEqualToType:(id)a0;
- (BOOL)isEqualToUTType:(const struct __CFString { } *)a0;
- (BOOL)conformsToUTTypes:(id)a0;
- (id)conformingTypesWithFileExtension:(id)a0;
- (id)conformingTypesWithMIMEType:(id)a0;
- (id)preferredTagWithClass:(const struct __CFString { } *)a0;
- (id)conformingTypesWithTagClass:(const struct __CFString { } *)a0 tag:(id)a1;

@end
