@class NSString, NSData;

@interface NPKProtoSetExpressPassRequest : PBRequest <NSCopying> {
    struct { unsigned char cancelOutstandingRequests : 1; unsigned char requestAuthorization : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (nonatomic) BOOL hasCancelOutstandingRequests;
@property (nonatomic) BOOL cancelOutstandingRequests;
@property (readonly, nonatomic) BOOL hasApplicationIdentifier;
@property (retain, nonatomic) NSString *applicationIdentifier;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (nonatomic) BOOL requestAuthorization;
@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
