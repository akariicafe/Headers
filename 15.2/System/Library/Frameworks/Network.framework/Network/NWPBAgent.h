@class NWPBAgentClass, NSString, NSData;

@interface NWPBAgent : PBCodable <NSCopying> {
    struct { unsigned char active : 1; unsigned char networkProvider : 1; unsigned char nexusProvider : 1; unsigned char userActivated : 1; unsigned char voluntary : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAgentClass;
@property (retain, nonatomic) NWPBAgentClass *agentClass;
@property (readonly, nonatomic) BOOL hasAgentIdentifier;
@property (retain, nonatomic) NSString *agentIdentifier;
@property (readonly, nonatomic) BOOL hasAgentDescription;
@property (retain, nonatomic) NSString *agentDescription;
@property (nonatomic) BOOL hasActive;
@property (nonatomic) BOOL active;
@property (nonatomic) BOOL hasUserActivated;
@property (nonatomic) BOOL userActivated;
@property (nonatomic) BOOL hasVoluntary;
@property (nonatomic) BOOL voluntary;
@property (nonatomic) BOOL hasNetworkProvider;
@property (nonatomic) BOOL networkProvider;
@property (nonatomic) BOOL hasNexusProvider;
@property (nonatomic) BOOL nexusProvider;
@property (readonly, nonatomic) BOOL hasAgentData;
@property (retain, nonatomic) NSData *agentData;

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

@end
