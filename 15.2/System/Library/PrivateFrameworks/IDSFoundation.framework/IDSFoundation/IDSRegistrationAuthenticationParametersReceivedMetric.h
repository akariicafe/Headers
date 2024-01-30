@class NSString, NSDictionary, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationAuthenticationParametersReceivedMetric : NSObject <CUTCoreAnalyticsMetric, CUTAWDMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned int awdIdentifier;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, nonatomic) long long errorCode;
@property (readonly, nonatomic) double timeIntervalSinceAuthenticationParameterRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithErrorCode:(long long)a0 timeIntervalSinceAuthenticationParameterRequest:(double)a1;

@end
