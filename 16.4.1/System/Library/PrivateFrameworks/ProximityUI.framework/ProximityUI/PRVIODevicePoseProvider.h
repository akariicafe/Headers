@class ARSession, PRDevicePoseValidator, NSString;

@interface PRVIODevicePoseProvider : PRDevicePoseProvider <ARSessionDelegate>

@property (retain, nonatomic) ARSession *session;
@property (retain, nonatomic) PRDevicePoseValidator *poseValidator;
@property (nonatomic) BOOL trackingNormal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
