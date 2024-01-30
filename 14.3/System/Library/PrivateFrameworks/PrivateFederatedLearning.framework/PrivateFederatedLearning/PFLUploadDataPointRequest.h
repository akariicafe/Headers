@class NSString, CKCodeRecordTransport;

@interface PFLUploadDataPointRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char accuracy : 1; unsigned char flattenedPrivatizedWeightCount : 1; unsigned char loss : 1; unsigned char modelVersion : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasFlattenedPrivatizedWeightData;
@property (retain, nonatomic) CKCodeRecordTransport *flattenedPrivatizedWeightData;
@property (nonatomic) BOOL hasFlattenedPrivatizedWeightCount;
@property (nonatomic) long long flattenedPrivatizedWeightCount;
@property (readonly, nonatomic) BOOL hasFlattenedPrivatizedWeightType;
@property (retain, nonatomic) NSString *flattenedPrivatizedWeightType;
@property (nonatomic) BOOL hasAccuracy;
@property (nonatomic) double accuracy;
@property (nonatomic) BOOL hasLoss;
@property (nonatomic) double loss;
@property (readonly, nonatomic) BOOL hasTaskId;
@property (retain, nonatomic) NSString *taskId;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) long long modelVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)extractRecordTransports;
- (void)substituteRecordTransports:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
