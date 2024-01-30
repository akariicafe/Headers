@class NSString;
@protocol DMTEnrollmentInitiating, DMTDeviceInformationPrimitives, DMTEnrollmentStateProviding, DMTEnrollmentPrerequisiteReceiving;

@interface DMTTaskOperationBuilder : NSObject <DMTTaskOperationProviding>

@property (readonly, nonatomic) id<DMTDeviceInformationPrimitives> deviceInfoPrimitives;
@property (readonly, nonatomic) id<DMTEnrollmentPrerequisiteReceiving> enrollmentPrerequisiteReceiver;
@property (readonly, nonatomic) id<DMTEnrollmentInitiating> enrollmentInitiator;
@property (readonly, nonatomic) id<DMTEnrollmentStateProviding> enrollmentStateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validationClassForRequest:(id)a0;

@end
