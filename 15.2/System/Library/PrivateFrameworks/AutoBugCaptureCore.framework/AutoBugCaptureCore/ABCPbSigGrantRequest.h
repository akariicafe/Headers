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

- (unsigned long long)sigRequestsCount;
- (void)clearSigRequests;
- (id)sigRequestAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void)addSigRequest:(id)a0;
- (id)dictionaryRepresentation;

@end
