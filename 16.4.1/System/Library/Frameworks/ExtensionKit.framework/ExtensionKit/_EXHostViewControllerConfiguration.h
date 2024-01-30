@class NSString, _EXExtensionInstanceIdentifier, _EXExtensionIdentity;
@protocol _EXExtensionRepresenting, _EXSceneInitializationParameters;

@interface _EXHostViewControllerConfiguration : NSObject <NSCopying>

@property (nonatomic) long long sizeBridgingOptions;
@property (retain, nonatomic) NSString *sceneIdentifier;
@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (retain, nonatomic) NSString *role;
@property (retain, nonatomic) id<_EXSceneInitializationParameters> initializationParameters;
@property (nonatomic) BOOL beginHostingImmediately;
@property (nonatomic) BOOL retryOnHostingFailure;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;

- (id)initWithExtension:(id)a0;
- (id)initWithExtensionIdentity:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithExtension:(id)a0 role:(id)a1;

@end
