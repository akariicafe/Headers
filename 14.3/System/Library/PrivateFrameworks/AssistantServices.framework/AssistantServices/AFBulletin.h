@class NSString, NSArray, NSDate, BBBulletin;

@interface AFBulletin : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long feed;
@property (copy, nonatomic) NSString *displayName;
@property (nonatomic) BOOL availableOnLockScreen;
@property (nonatomic) BOOL supportsSpokenNotification;
@property (nonatomic, getter=isRead) BOOL read;
@property (readonly, nonatomic) BBBulletin *bbBulletin;
@property (readonly, copy, nonatomic) NSString *bulletinID;
@property (readonly, copy, nonatomic) NSString *recordID;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *modalAlertContentMessage;
@property (readonly, copy, nonatomic) NSDate *recencyDate;
@property (readonly, copy, nonatomic) NSString *sectionID;
@property (readonly, nonatomic) long long sectionSubtype;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *timeZone;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSArray *intentIDs;
@property (readonly, copy, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL previewRestricted;
@property (readonly, copy, nonatomic) NSString *threadID;
@property (readonly, copy, nonatomic) NSString *internalID;

+ (id)internalIDForBBBulletinID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_displayNameForBulletin:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setBulletin:(id)a0 forFeed:(unsigned long long)a1;
- (void)setBulletin:(id)a0;
- (void)setNotification:(id)a0 fromSourceApp:(id)a1;
- (void)wasRemovedFromFeed:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
