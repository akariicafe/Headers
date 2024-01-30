@class NSString, NSMutableArray;

@interface ABCPbSigGrantRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {
    struct { unsigned char ver : 1; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasVer;
@property (nonatomic) unsigned int ver;
@property (readonly, nonatomic) BOOL hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;
@property (readonly, nonatomic) BOOL hasBuildPlatform;
@property (retain, nonatomic) NSString *buildPlatform;
@property (retain, nonatomic) NSMutableArray *sigRequests;

+ (Class)sigRequestType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)addSigRequest:(id)a0;
- (unsigned long long)sigRequestsCount;
- (void)clearSigRequests;
- (id)sigRequestAtIndex:(unsigned long long)a0;

@end
