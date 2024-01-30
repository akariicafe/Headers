@class NSString;

@interface ATXPBFaceGalleryItem : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasDescriptorIdentifier;
@property (retain, nonatomic) NSString *descriptorIdentifier;
@property (readonly, nonatomic) BOOL hasExtensionBundleIdentifier;
@property (retain, nonatomic) NSString *extensionBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
