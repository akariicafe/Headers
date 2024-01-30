@class NSString, NSMutableArray, NSData;

@interface VCPBWorkflow : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; unsigned char integerLastMigratedClientVersion : 1; unsigned char integerMinimumClientVersion : 1; unsigned char modificationDate : 1; unsigned char iconColor : 1; unsigned char iconGlyph : 1; unsigned char remoteQuarantineStatus : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL hasIconColor;
@property (nonatomic) unsigned int iconColor;
@property (nonatomic) BOOL hasIconGlyph;
@property (nonatomic) unsigned int iconGlyph;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (nonatomic) BOOL hasModificationDate;
@property (nonatomic) double modificationDate;
@property (retain, nonatomic) NSMutableArray *workflowTypes;
@property (retain, nonatomic) NSMutableArray *inputClasses;
@property (readonly, nonatomic) BOOL hasActionsData;
@property (retain, nonatomic) NSData *actionsData;
@property (readonly, nonatomic) BOOL hasImportQuestionsData;
@property (retain, nonatomic) NSData *importQuestionsData;
@property (nonatomic) BOOL hasIntegerMinimumClientVersion;
@property (nonatomic) unsigned long long integerMinimumClientVersion;
@property (nonatomic) BOOL hasIntegerLastMigratedClientVersion;
@property (nonatomic) unsigned long long integerLastMigratedClientVersion;
@property (readonly, nonatomic) BOOL hasMinimumClientVersion;
@property (retain, nonatomic) NSString *minimumClientVersion;
@property (readonly, nonatomic) BOOL hasLastMigratedClientVersion;
@property (retain, nonatomic) NSString *lastMigratedClientVersion;
@property (readonly, nonatomic) BOOL hasAccessResourcePerWorkflowStateData;
@property (retain, nonatomic) NSData *accessResourcePerWorkflowStateData;
@property (readonly, nonatomic) BOOL hasSmartPromptPerWorkflowStateData;
@property (retain, nonatomic) NSData *smartPromptPerWorkflowStateData;
@property (nonatomic) BOOL hasRemoteQuarantineStatus;
@property (nonatomic) int remoteQuarantineStatus;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;

+ (Class)inputClassesType;
+ (Class)workflowTypesType;

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
- (int)StringAsRemoteQuarantineStatus:(id)a0;
- (id)remoteQuarantineStatusAsString:(int)a0;
- (void)addInputClasses:(id)a0;
- (void)addWorkflowTypes:(id)a0;
- (void)clearInputClasses;
- (void)clearWorkflowTypes;
- (id)inputClassesAtIndex:(unsigned long long)a0;
- (unsigned long long)inputClassesCount;
- (id)workflowTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)workflowTypesCount;

@end
