@class NSString;

@interface OZFxPlugHostPropertiesAPI : NSObject <FxHostPropertiesAPI, PROAPIObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)releaseSharedHostPropertiesAPI;
+ (id)sharedHostPropertiesAPI;

- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;
- (id)hostProperties;

@end
