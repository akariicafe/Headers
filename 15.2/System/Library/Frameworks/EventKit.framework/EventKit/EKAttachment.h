@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;
@property (nonatomic) BOOL isBinary;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileNameRaw;
@property (retain, nonatomic) NSString *fileFormat;
@property (retain, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSURL *URLForPendingFileCopy;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (id)createTempDestinationURLWithExtension:(id)a0;
+ (id)_copyFileAtURLToTemporaryDirectory:(id)a0;
+ (id)knownSingleValueKeysForComparison;

- (void)setLocalRelativePath:(id)a0;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)a0;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (id)URLString;
- (void)setURLString:(id)a0;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;
- (id)description;
- (BOOL)save:(id *)a0;
- (id)init;
- (id)initWithFilepath:(id)a0;
- (long long)compareFileNames:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setUUID:(id)a0;
- (id)semanticIdentifier;

@end
