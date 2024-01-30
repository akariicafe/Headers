@interface VNError : NSObject

+ (id)errorForUnsupportedProcessingDevice:(id)a0;
+ (id)errorForCVReturnCode:(int)a0 localizedDescription:(id)a1;
+ (id)errorForFailedEspressoPlan:(void *)a0 localizedDescription:(id)a1;
+ (id)errorForUnknownErrorWithLocalizedDescription:(id)a0;
+ (id)errorForMissingOptionNamed:(id)a0;
+ (id)errorForCancellationOfRequest:(id)a0;
+ (id)errorForInvalidFormatErrorWithLocalizedDescription:(id)a0;
+ (id)errorForUnsupportedRequestClassName:(id)a0;
+ (id)errorForInvalidOperationWithLocalizedDescription:(id)a0;
+ (id)errorForUnsupportedConfigurationOfRequest:(id)a0;
+ (id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)a0;
+ (id)errorForUnsupportedSerializingHeaderVersion:(unsigned int)a0;
+ (id)errorForUnavailableSession;
+ (id)errorForUnimplementedFunctionWithLocalizedDescription:(id)a0;
+ (id)errorForInvalidArgumentWithLocalizedDescription:(id)a0;
+ (id)errorForEspressoErrorInfo:(struct { int x0; int x1; char *x2; })a0 localizedDescription:(id)a1;
+ (id)errorForGPURequiredByRequest:(id)a0;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)a0 underlyingError:(id)a1;
+ (id)errorForInvalidOptionWithLocalizedDescription:(id)a0;
+ (id)errorForOSStatus:(int)a0 localizedDescription:(id)a1;
+ (id)errorForUnsupportedRevision:(unsigned long long)a0 ofRequestClass:(Class)a1;
+ (id)errorForUnsupportedRevision:(unsigned long long)a0 ofRequest:(id)a1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)a0 underlyingError:(id)a1;
+ (void)VNAssert:(BOOL)a0 log:(id)a1;
+ (id)errorForInvalidArgument:(id)a0 named:(id)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)errorForInvalidOption:(id)a0 named:(id)a1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)a0;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)a0 underlyingError:(id)a1;
+ (id)errorForOperationFailedErrorWithLocalizedDescription:(id)a0;
+ (id)errorForInvalidOperationForRequestSpecifier:(id)a0;
+ (id)errorForOutOfBoundsErrorWithLocalizedDescription:(id)a0;
+ (id)errorForMemoryAllocationFailure;
+ (void)logInternalError:(id)a0;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)a0;
+ (id)errorForUnimplementedMethod:(SEL)a0 ofObject:(id)a1;
+ (id)errorForUnsupportedRequestSpecifier:(id)a0;
+ (id)errorForInvalidOption:(id)a0 named:(id)a1 localizedDescription:(id)a2;
+ (id)errorWithCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
+ (id)errorForEspressoReturnStatus:(int)a0 localizedDescription:(id)a1;
+ (id)errorForInvalidOperationForRequestClass:(Class)a0 revision:(unsigned long long)a1;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)a0;

@end
