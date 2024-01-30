@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject

@property (nonatomic) long long componentID;
@property (retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
