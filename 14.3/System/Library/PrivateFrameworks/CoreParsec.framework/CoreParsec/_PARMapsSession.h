@class NSString, NSData;

@interface _PARMapsSession : PBCodable <_PARMapsSession, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *enviroment;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) double relativeTimestamp;
@property (copy, nonatomic) NSData *metadata;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
