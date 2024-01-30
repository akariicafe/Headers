@interface EKPersistentAttachment : EKPersistentObject

+ (id)relations;
+ (id)propertyKeyForUniqueIdentifier;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;

- (void)setExternalModificationTag:(id)a0;
- (int)entityType;
- (id)fileSize;
- (void)setFileSize:(id)a0;
- (id)fileFormat;
- (void)setFlags:(int)a0;
- (id)URLString;
- (int)flags;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setExternalID:(id)a0;
- (void)setUUID:(id)a0;
- (id)externalID;
- (id)externalModificationTag;
- (id)description;
- (void)setURLString:(id)a0;
- (void)setFileFormat:(id)a0;
- (void)setFileNameRaw:(id)a0;
- (id)XPropertiesData;
- (id)fileNameRaw;
- (id)localRelativePath;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setLocalRelativePath:(id)a0;
- (void)setSecurityScopedLocalURLForArchivedDataWrapper:(id)a0;
- (void)setSecurityScopedLocalURLWrapper:(id)a0;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (void)setXPropertiesData:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;

@end
