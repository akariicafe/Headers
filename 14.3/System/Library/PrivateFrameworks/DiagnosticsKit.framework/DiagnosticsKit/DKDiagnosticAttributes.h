@class NSString, NSNumber, NSExtension;

@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes>

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSNumber *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSNumber *freeSpaceRequired;
@property (readonly, nonatomic, getter=isHeadless) BOOL headless;
@property (readonly, nonatomic, getter=isRestricted) BOOL restricted;
@property (readonly, nonatomic) BOOL requiresUnlock;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtension:(id)a0;
- (id)initWithIdentifier:(id)a0 version:(id)a1 freeSpaceRequired:(id)a2 name:(id)a3 serviceName:(id)a4 headless:(BOOL)a5;
- (BOOL)isEqualToAttributes:(id)a0;
- (id)initWithIdentifier:(id)a0 version:(id)a1 name:(id)a2 serviceName:(id)a3;

@end
