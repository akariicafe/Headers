@class NSArray, _INPBAnnouncement, NSString, _INPBIntentMetadata;

@interface _INPBSendAnnouncementIntent : PBCodable <_INPBSendAnnouncementIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char isReply : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAnnouncement *announcement;
@property (readonly, nonatomic) BOOL hasAnnouncement;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL isReply;
@property (nonatomic) BOOL hasIsReply;
@property (copy, nonatomic) NSArray *recipients;
@property (readonly, nonatomic) unsigned long long recipientsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearRecipients;
- (void)addRecipients:(id)a0;
- (id)recipientsAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
