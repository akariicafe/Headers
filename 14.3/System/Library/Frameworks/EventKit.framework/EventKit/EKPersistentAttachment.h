@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (Class)meltedClass;

- (id)URL;
- (void)setUUID:(id)a0;
- (int)entityType;
- (void)setExternalID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)UUID;
- (void)setURL:(id)a0;
- (id)description;
- (id)semanticIdentifier;
- (BOOL)isBinary;
- (id)externalID;
- (void)setFileSize:(id)a0;
- (id)fileFormat;
- (id)fileSize;
- (id)fileNameRaw;
- (void)setFileNameRaw:(id)a0;
- (void)setFileFormat:(id)a0;
- (void)setIsBinary:(BOOL)a0;
- (id)localRelativePath;
- (void)setLocalRelativePath:(id)a0;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)a0;
- (id)URLForPendingFileCopy;
- (void)setURLForPendingFileCopy:(id)a0;

@end
