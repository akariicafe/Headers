@class BiometricKitEnrollProgressCoordinates;

@interface BiometricKitEnrollProgressMergedComponent : NSObject

@property (nonatomic) long long componentID;
@property (retain, nonatomic) BiometricKitEnrollProgressCoordinates *transformationCoordinates;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
