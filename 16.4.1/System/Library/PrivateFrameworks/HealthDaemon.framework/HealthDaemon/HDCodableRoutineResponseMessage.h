@class NSString, HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse;

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying> {
    struct { unsigned char requestType : 1; } _has;
}

@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) int requestType;
@property (readonly, nonatomic) BOOL hasRequestIdentifier;
@property (retain, nonatomic) NSString *requestIdentifier;
@property (readonly, nonatomic) BOOL hasFetchLocationResponse;
@property (retain, nonatomic) HDCodableRoutineLocationResponse *fetchLocationResponse;
@property (readonly, nonatomic) BOOL hasFetchNextLocationResponse;
@property (retain, nonatomic) HDCodableRoutinePredictedLocationsResponse *fetchNextLocationResponse;
@property (readonly, nonatomic) BOOL hasErrorDescription;
@property (retain, nonatomic) NSString *errorDescription;

- (int)StringAsRequestType:(id)a0;
- (id)requestTypeAsString:(int)a0;
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
