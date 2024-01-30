@class NSData, SIServiceServerUploadInfo, SIServiceDeviceUploadInfo;

@interface SIServiceBatchInfo : SISchemaInstrumentationMessage {
    struct { unsigned char batch_type : 1; } _has;
}

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) BOOL hasBatch_id;
@property (retain, nonatomic) SIServiceDeviceUploadInfo *device_upload_info;
@property (nonatomic) BOOL hasDevice_upload_info;
@property (retain, nonatomic) SIServiceServerUploadInfo *server_upload_info;
@property (nonatomic) BOOL hasServer_upload_info;
@property (nonatomic) int batch_type;
@property (nonatomic) BOOL hasBatch_type;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichUpload_Info;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteBatch_id;
- (void)deleteBatch_type;
- (void)deleteDevice_upload_info;
- (void)deleteServer_upload_info;

@end
