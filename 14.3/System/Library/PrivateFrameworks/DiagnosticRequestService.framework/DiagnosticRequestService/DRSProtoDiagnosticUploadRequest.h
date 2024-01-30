@class DRSProtoRequestDescription, NSString, NSMutableArray;

@interface DRSProtoDiagnosticUploadRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) BOOL hasIssueDescription;
@property (retain, nonatomic) NSString *issueDescription;
@property (retain, nonatomic) NSMutableArray *logs;

+ (Class)logsType;

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
- (void)addLogs:(id)a0;
- (unsigned long long)logsCount;
- (void)clearLogs;
- (id)logsAtIndex:(unsigned long long)a0;

@end
