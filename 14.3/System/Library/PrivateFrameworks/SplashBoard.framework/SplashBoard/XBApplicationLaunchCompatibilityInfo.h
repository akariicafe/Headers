@class NSString, XBLaunchInterface, NSArray;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding> {
    XBLaunchInterface *_defaultInterface;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *sandboxPath;
@property (copy, nonatomic) NSString *bundleContainerPath;
@property (copy, nonatomic) NSString *defaultGroupIdentifier;
@property (nonatomic) BOOL launchesOpaque;
@property (readonly, copy, nonatomic) XBLaunchInterface *defaultLaunchInterface;
@property (readonly, copy, nonatomic) NSArray *launchInterfaces;
@property (readonly, nonatomic) BOOL allowsSavingLaunchImages;
@property (nonatomic) BOOL hasKnownBadLaunchImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compatibilityInfoForAppInfo:(id)a0;

- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_setLaunchInterfaces:(id)a0;
- (id)launchInterfaceIdentifierForRequest:(id)a0;
- (id)launchInterfaceWithIdentifier:(id)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithBundle:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
