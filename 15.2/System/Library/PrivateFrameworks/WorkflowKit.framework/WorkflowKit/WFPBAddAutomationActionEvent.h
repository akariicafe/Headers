@class NSString;

@interface WFPBAddAutomationActionEvent : PBCodable <NSCopying> {
    struct { unsigned char actionIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasShortcutIdentifier;
@property (retain, nonatomic) NSString *shortcutIdentifier;
@property (nonatomic) BOOL hasActionIndex;
@property (nonatomic) unsigned int actionIndex;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;

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
