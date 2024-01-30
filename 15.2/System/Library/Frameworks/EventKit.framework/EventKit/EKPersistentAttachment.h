@interface EKPersistentAttachment : EKPersistentObject

+ (Class)meltedClass;
+ (id)relations;

- (int)entityType;
- (id)fileSize;
- (void)setExternalID:(id)a0;
- (void)setFileSize:(id)a0;
- (id)fileNameRaw;
- (void)setFileNameRaw:(id)a0;
- (void)setFileFormat:(id)a0;
- (void)setIsBinary:(BOOL)a0;
- (id)localRelativePath;
- (void)setLocalRelativePath:(id)a0;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)a0;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (id)URLString;
- (id)UUID;
- (void)setURLString:(id)a0;
- (id)description;
- (BOOL)isBinary;
- (id)externalModificationTag;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExternalModificationTag:(id)a0;
- (id)externalID;
- (id)fileFormat;
- (void)setUUID:(id)a0;
- (id)semanticIdentifier;

@end
