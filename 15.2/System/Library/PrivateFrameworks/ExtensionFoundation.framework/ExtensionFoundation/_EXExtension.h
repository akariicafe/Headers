@class NSString, _EXExtensionRep;
@protocol _EXExtensionConfigurationProviding;

@interface _EXExtension : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) id<_EXExtensionConfigurationProviding> configuration;
@property (readonly) _EXExtensionRep *internalRep;

- (void).cxx_destruct;
- (id)initWithApplicationExtensionRecord:(id)a0;

@end
