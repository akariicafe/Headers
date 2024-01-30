@class NSString;

@interface PFLUploadDataPointResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char success : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;

@end
