@class NSUUID, NSDate;

@interface MSPCloudClientRegistrationRecord : NSObject

@property (retain, nonatomic) NSUUID *clientIdentifier;
@property (nonatomic) unsigned long long desiredEpoch;
@property (nonatomic) unsigned long long earliestCompatibleEpoch;
@property (readonly, nonatomic) BOOL isChanged;
@property (retain, nonatomic) NSDate *lastRegistrationDate;

- (id)recordRepresentation;
- (id)initWithRecord:(id)a0;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;

@end
