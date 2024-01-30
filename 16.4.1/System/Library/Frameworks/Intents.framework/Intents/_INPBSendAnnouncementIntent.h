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
@property (copy, nonatomic) NSString *sharedUserID;
@property (readonly, nonatomic) BOOL hasSharedUserID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)recipientsType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearRecipients;
- (void).cxx_destruct;
- (void)addRecipients:(id)a0;
- (id)recipientsAtIndex:(unsigned long long)a0;

@end
