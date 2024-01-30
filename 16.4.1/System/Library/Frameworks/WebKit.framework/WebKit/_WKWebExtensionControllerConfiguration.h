@class NSUUID, NSString;

@interface _WKWebExtensionControllerConfiguration : NSObject <WKObject, NSSecureCoding, NSCopying> {
    struct ObjectStorage<WebKit::WebExtensionControllerConfiguration> { struct type { unsigned char __lx[64]; } data; } _webExtensionControllerConfiguration;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *_webExtensionControllerConfiguration;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configurationWithIdentifier:(id)a0;
+ (id)defaultConfiguration;
+ (id)nonPersistentConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;

@end
