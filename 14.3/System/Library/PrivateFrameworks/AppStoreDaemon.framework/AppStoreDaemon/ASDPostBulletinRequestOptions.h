@class NSString, NSURL, NSDate;

@interface ASDPostBulletinRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSString *actionButtonTitle;
@property (copy, nonatomic) NSURL *actionButtonURL;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long destinations;
@property (copy, nonatomic) NSURL *launchURL;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
