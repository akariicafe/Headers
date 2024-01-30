@class NSString, NSMutableArray;

@interface HMMediaGroupProtoMediaDestinationControllerData : PBCodable <NSCopying> {
    struct { unsigned char supportedOptions : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasParentIdentifier;
@property (retain, nonatomic) NSString *parentIdentifier;
@property (readonly, nonatomic) BOOL hasDestinationIdentifier;
@property (retain, nonatomic) NSString *destinationIdentifier;
@property (retain, nonatomic) NSMutableArray *availableDestinations;
@property (nonatomic) BOOL hasSupportedOptions;
@property (nonatomic) unsigned long long supportedOptions;

+ (Class)availableDestinationsType;

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
- (void)addAvailableDestinations:(id)a0;
- (id)availableDestinationsAtIndex:(unsigned long long)a0;
- (unsigned long long)availableDestinationsCount;
- (void)clearAvailableDestinations;

@end
