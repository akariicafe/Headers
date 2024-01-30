@class NSString, NSMutableArray;

@interface ICIAMLogEventRequest : PBRequest <NSCopying> {
    struct { unsigned char dSID : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasApplicationMessageIdentifier;
@property (retain, nonatomic) NSString *applicationMessageIdentifier;
@property (nonatomic) BOOL hasDSID;
@property (nonatomic) long long dSID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (retain, nonatomic) NSString *deviceID;
@property (retain, nonatomic) NSMutableArray *eventParameters;

+ (Class)eventParametersType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)clearEventParameters;
- (void)addEventParameters:(id)a0;
- (unsigned long long)eventParametersCount;
- (id)eventParametersAtIndex:(unsigned long long)a0;

@end
