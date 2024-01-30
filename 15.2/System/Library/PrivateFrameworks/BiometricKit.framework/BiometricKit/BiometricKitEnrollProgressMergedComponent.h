@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject

@property (nonatomic) long long componentID;
@property (retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
