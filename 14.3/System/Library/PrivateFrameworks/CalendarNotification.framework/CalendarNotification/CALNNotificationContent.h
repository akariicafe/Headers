@class NSString, NSArray, NSURL, NSDate, CALNNotificationSound, NSDictionary;

@interface CALNNotificationContent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *body;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) NSURL *defaultActionURL;
@property (readonly, nonatomic) BOOL shouldHideTime;
@property (readonly, copy, nonatomic) NSString *iconIdentifier;
@property (readonly, nonatomic) BOOL shouldSuppressSyncDismissalWhenRemoved;
@property (readonly, copy, nonatomic) NSArray *peopleIdentifiers;
@property (readonly, copy, nonatomic) CALNNotificationSound *sound;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;
@property (readonly, copy, nonatomic) NSString *threadIdentifier;
@property (readonly, copy, nonatomic) NSString *summaryArgument;
@property (readonly, nonatomic) unsigned long long summaryArgumentCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)_initWithTitle:(id)a0 subtitle:(id)a1 body:(id)a2 categoryIdentifier:(id)a3 sectionIdentifier:(id)a4 date:(id)a5 expirationDate:(id)a6 defaultActionURL:(id)a7 iconIdentifier:(id)a8 shouldHideTime:(BOOL)a9 shouldSuppressSyncDismissalWhenRemoved:(BOOL)a10 peopleIdentifiers:(id)a11 sound:(id)a12 userInfo:(id)a13 threadIdentifier:(id)a14 summaryArgument:(id)a15 summaryArgumentCount:(unsigned long long)a16;
- (BOOL)isEqualToContent:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualForDiffingPurposesToContent:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
