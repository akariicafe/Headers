@class NSUUID, NSString, NSData, NSDate, NSDictionary;

@interface HKHealthWrapMessageConfiguration : NSObject

@property (readonly, copy, nonatomic) NSUUID *subjectUUID;
@property (readonly, copy, nonatomic) NSUUID *studyUUID;
@property (readonly, copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *payloadType;
@property (readonly, nonatomic) struct __SecCertificate { } *certificate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSString *payloadIdentifier;
@property (copy, nonatomic) NSData *applicationData;
@property (copy, nonatomic) NSDictionary *keyValuePairs;
@property (nonatomic) BOOL disableCompression;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannel:(id)a0 payloadType:(id)a1 certificate:(struct __SecCertificate { } *)a2;
- (id)initWithSubjectUUID:(id)a0 studyUUID:(id)a1 channel:(id)a2 payloadType:(id)a3 certificate:(struct __SecCertificate { } *)a4;

@end
