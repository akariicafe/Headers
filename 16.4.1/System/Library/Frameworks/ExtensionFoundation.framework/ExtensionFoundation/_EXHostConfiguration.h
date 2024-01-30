@class NSArray, NSString, _EXExtensionInstanceIdentifier, _EXExtensionIdentity;
@protocol _EXExtensionRepresenting;

@interface _EXHostConfiguration : NSObject <NSCopying>

@property (retain, nonatomic) id<_EXExtensionRepresenting> extension;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (copy) id /* block */ interruptionHandler;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSString *sandboxProfileName;

- (id)initWithExtension:(id)a0;
- (id)initWithExtensionIdentity:(id)a0;
- (id)rbsProcessIdentity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExtensionIdentity:(id)a0 instanceIdentifier:(id)a1;
- (id)initWithExtension:(id)a0 instanceIdentifier:(id)a1;
- (id)description;
- (void).cxx_destruct;

@end
