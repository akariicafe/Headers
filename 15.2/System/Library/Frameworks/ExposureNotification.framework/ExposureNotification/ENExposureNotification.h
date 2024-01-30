@class NSUUID, NSString, ENExposureClassification, NSURL, NSDate, ENRegion;

@interface ENExposureNotification : NSObject <NSSecureCoding> {
    NSDate *_legacyDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ENExposureClassification *classification;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSURL *learnMoreURL;
@property (copy, nonatomic) NSString *localizedBodyText;
@property (copy, nonatomic) NSString *localizedDetailBodyText;
@property (copy, nonatomic) NSString *localizedSubjectText;
@property (copy, nonatomic) NSDate *notificationDate;
@property (copy, nonatomic) ENRegion *region;
@property (nonatomic) BOOL revoked;
@property (readonly, copy, nonatomic) NSDate *date;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
