@class NSString, NSNumber, NSDate;

@interface ENUserAuthorization : NSObject <NSSecureCoding, NSCopying> {
    long long _authorization;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSDate *testDateToday;
@property (copy, nonatomic) NSNumber *didUserTravel;
@property (copy, nonatomic) NSNumber *isUserVaccinated;
@property (nonatomic) unsigned int reportType;
@property (copy, nonatomic) NSDate *symptomOnsetDate;
@property (copy, nonatomic) NSString *verificationCode;
@property (nonatomic) long long userAuthorization;
@property (readonly, nonatomic) double lastUpdatedTimestamp;
@property (readonly, nonatomic) long long expirationStatus;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setUserAuthorization:(long long)a0 withExpiration:(id)a1;

@end
