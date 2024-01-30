@class NSArray, NSString;

@interface _INPBSendAnnouncementIntentResponse : PBCodable <_INPBSendAnnouncementIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *sentAnnouncements;
@property (readonly, nonatomic) unsigned long long sentAnnouncementsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sentAnnouncementsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)clearSentAnnouncements;
- (void)addSentAnnouncements:(id)a0;
- (id)sentAnnouncementsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
