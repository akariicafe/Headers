@class NSString;

@interface OZFxPlugHostPropertiesAPI : NSObject <FxHostPropertiesAPI, PROAPIObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHostPropertiesAPI;
+ (void)releaseSharedHostPropertiesAPI;

- (id)hostProperties;
- (BOOL)conformsToProtocol:(id)a0 version:(unsigned int)a1;

@end
