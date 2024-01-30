@class NSString, NSMutableArray;

@interface NNMKProtoSendMessageRequest : PBRequest <NSCopying> {
    struct { unsigned char sendingType : 1; unsigned char includeAttachments : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *tos;
@property (retain, nonatomic) NSMutableArray *ccs;
@property (readonly, nonatomic) BOOL hasSubject;
@property (retain, nonatomic) NSString *subject;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) NSString *body;
@property (readonly, nonatomic) BOOL hasComposedMessageId;
@property (retain, nonatomic) NSString *composedMessageId;
@property (nonatomic) BOOL hasSendingType;
@property (nonatomic) unsigned int sendingType;
@property (readonly, nonatomic) BOOL hasReferenceMessageId;
@property (retain, nonatomic) NSString *referenceMessageId;
@property (nonatomic) BOOL hasIncludeAttachments;
@property (nonatomic) BOOL includeAttachments;

+ (Class)toType;
+ (Class)ccType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addTo:(id)a0;
- (void)addCc:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)tosCount;
- (void)clearTos;
- (id)toAtIndex:(unsigned long long)a0;
- (unsigned long long)ccsCount;
- (void)clearCcs;
- (id)ccAtIndex:(unsigned long long)a0;

@end
