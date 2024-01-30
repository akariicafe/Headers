@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) BOOL isBinary;
@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSString *fileFormat;
@property (readonly, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSURL *URLForPendingFileCopy;

+ (id)knownSingleValueKeysForComparison;
+ (id)knownIdentityKeysForComparison;
+ (Class)frozenClass;
+ (id)createTempDestinationURLWithExtension:(id)a0;
+ (id)_copyFileAtURLToTemporaryDirectory:(id)a0;

- (void)setUUID:(id)a0;
- (void)setExternalID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setURL:(id)a0;
- (id)description;
- (id)semanticIdentifier;
- (id)externalID;
- (void)setFileSize:(id)a0;
- (id)fileNameRaw;
- (void)setFileNameRaw:(id)a0;
- (void)setFileFormat:(id)a0;
- (void)setIsBinary:(BOOL)a0;
- (void)setLocalRelativePath:(id)a0;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)a0;
- (long long)compareFileNames:(id)a0;
- (void)setURLForPendingFileCopy:(id)a0;
- (id)initWithFilepath:(id)a0;

@end
