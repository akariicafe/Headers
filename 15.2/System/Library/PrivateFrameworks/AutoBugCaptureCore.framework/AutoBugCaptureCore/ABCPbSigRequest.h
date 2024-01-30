@class NSString;

@interface ABCPbSigRequest : PBRequest <NSCopying> {
    struct { unsigned char logSizeTotal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (retain, nonatomic) NSString *subtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (retain, nonatomic) NSString *subtypeContext;
@property (readonly, nonatomic) BOOL hasCaseIdentifier;
@property (retain, nonatomic) NSString *caseIdentifier;
@property (readonly, nonatomic) BOOL hasProcess;
@property (retain, nonatomic) NSString *process;
@property (readonly, nonatomic) BOOL hasBuild;
@property (retain, nonatomic) NSString *build;
@property (readonly, nonatomic) BOOL hasBuildVariant;
@property (retain, nonatomic) NSString *buildVariant;
@property (readonly, nonatomic) BOOL hasCaseGroupIdentifier;
@property (retain, nonatomic) NSString *caseGroupIdentifier;
@property (nonatomic) BOOL hasLogSizeTotal;
@property (nonatomic) unsigned int logSizeTotal;

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
