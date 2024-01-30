@class NSString;

@interface WFPBAutomatorWorkflowMigrationEvent : PBCodable <NSCopying> {
    struct { unsigned char automatorActionCount : 1; unsigned char completed : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasAutomatorActionCount;
@property (nonatomic) unsigned int automatorActionCount;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;

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
