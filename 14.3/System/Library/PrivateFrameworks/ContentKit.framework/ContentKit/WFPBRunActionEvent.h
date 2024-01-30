@class NSString;

@interface WFPBRunActionEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; unsigned char didRunRemotely : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasRunSource;
@property (retain, nonatomic) NSString *runSource;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL hasActionIdentifier;
@property (retain, nonatomic) NSString *actionIdentifier;
@property (readonly, nonatomic) BOOL hasShortcutSource;
@property (retain, nonatomic) NSString *shortcutSource;
@property (readonly, nonatomic) BOOL hasAutomationType;
@property (retain, nonatomic) NSString *automationType;
@property (nonatomic) BOOL hasDidRunRemotely;
@property (nonatomic) BOOL didRunRemotely;

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
