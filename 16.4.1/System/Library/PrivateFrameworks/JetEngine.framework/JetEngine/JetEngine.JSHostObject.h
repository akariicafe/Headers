@class NSString;

@interface JetEngine.JSHostObject : NSObject <_TtP9JetEngineP33_3B280445E2AC6E2542A3DCC2FD82BB2C19JSHostObjectExports_>

@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *deviceLocalizedModel;
@property (nonatomic, readonly) NSString *devicePhysicalModel;
@property (nonatomic, readonly) NSString *deviceModelFamily;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) NSString *clientVersion;

- (id)init;
- (BOOL)isOSAtLeast:(id)a0 :(id)a1 :(id)a2;

@end
