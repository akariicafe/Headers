@class NSString, ModelKeyServerAPIFetchKeyResult, ModelKeyServerAPIResultError;

@interface ModelKeyServerAPIFetchKeyResponse : PBCodable <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char result : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasSuccess;
@property (retain, nonatomic) ModelKeyServerAPIFetchKeyResult *success;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) ModelKeyServerAPIResultError *error;
@property (nonatomic) BOOL hasResult;
@property (nonatomic) int result;

- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)resultAsString:(int)a0;
- (int)StringAsResult:(id)a0;
- (void)clearOneofValuesForResult;
- (void)copyTo:(id)a0;
- (id)dictionaryRepresentation;

@end
