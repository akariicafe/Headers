@class NSArray, NSString;

@interface _INPBStopAnnouncementIntentResponse : PBCodable <_INPBStopAnnouncementIntentResponse, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *stoppedAnnouncementRecords;
@property (readonly, nonatomic) unsigned long long stoppedAnnouncementRecordsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)stoppedAnnouncementRecordsType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearStoppedAnnouncementRecords;
- (void)addStoppedAnnouncementRecords:(id)a0;
- (id)stoppedAnnouncementRecordsAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
