@class NSTimeZone, NSString, NSArray, NSURL, NSUUID, NSDictionary, NSDate;

@interface HDHRSOriginalSignedClinicalDataRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *rawContent;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSString *issuerIdentifier;
@property (readonly, copy, nonatomic) NSArray *credentialTypes;
@property (readonly, copy, nonatomic) NSUUID *syncIdentifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDate *receivedDate;
@property (readonly, copy, nonatomic) NSTimeZone *receivedDateTimeZone;
@property (readonly, nonatomic) long long signatureStatus;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawContent:(id)a0 sourceURL:(id)a1 issuerIdentifier:(id)a2 credentialTypes:(id)a3 syncIdentifier:(id)a4 metadata:(id)a5 receivedDate:(id)a6 receivedDateTimeZone:(id)a7 signatureStatus:(long long)a8;

@end
