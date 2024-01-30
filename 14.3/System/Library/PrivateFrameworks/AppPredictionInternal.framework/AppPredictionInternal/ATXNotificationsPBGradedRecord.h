@class NSString, ATXNotificationsPBGrade, ATXNotificationsPBContext;

@interface ATXNotificationsPBGradedRecord : PBCodable <NSCopying> {
    struct { unsigned char suppActions : 1; unsigned char timezone : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasTopic;
@property (retain, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) ATXNotificationsPBContext *context;
@property (nonatomic) BOOL hasSuppActions;
@property (nonatomic) int suppActions;
@property (nonatomic) BOOL hasTimezone;
@property (nonatomic) int timezone;
@property (readonly, nonatomic) BOOL hasGrade;
@property (retain, nonatomic) ATXNotificationsPBGrade *grade;
@property (readonly, nonatomic) BOOL hasUserid;
@property (retain, nonatomic) NSString *userid;

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
