@class NSString, PBCodable;
@protocol NSCopying;

@interface IDSRegistrationControlChosenMetric : NSObject <CUTAWDMetric>

@property (readonly, nonatomic) long long registrationType;
@property (readonly, nonatomic) long long registrationControlStatus;
@property (readonly, nonatomic) BOOL isInterestingRegion;
@property (readonly) unsigned int awdIdentifier;
@property (readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRegistrationType:(long long)a0 registrationControlStatus:(long long)a1 isInterestingRegion:(BOOL)a2;

@end
