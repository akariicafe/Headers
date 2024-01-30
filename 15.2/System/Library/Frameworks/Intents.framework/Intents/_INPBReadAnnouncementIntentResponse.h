@class NSArray, NSString;

@interface _INPBReadAnnouncementIntentResponse : PBCodable <_INPBReadAnnouncementIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *announcementRecords;
@property (readonly, nonatomic) unsigned long long announcementRecordsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)announcementRecordsType;

- (void)encodeWithCoder:(id)a0;
- (void)clearAnnouncementRecords;
- (void)addAnnouncementRecords:(id)a0;
- (id)announcementRecordsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
