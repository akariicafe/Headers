@protocol DMTDeviceInformationPrimitives;

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesOperation : DMTTaskOperation

@property (readonly, nonatomic) id<DMTDeviceInformationPrimitives> deviceInformationPrimitives;

+ (BOOL)validateRequest:(id)a0 error:(id *)a1;

- (id)initWithRequest:(id)a0 deviceInformationPrimitives:(id)a1;
- (void).cxx_destruct;
- (void)runWithRequest:(id)a0;

@end
