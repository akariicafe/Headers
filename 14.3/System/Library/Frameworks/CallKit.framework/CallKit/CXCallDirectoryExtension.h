@class NSString, LSPlugInKitProxy;

@interface CXCallDirectoryExtension : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedContainingAppName;
@property (retain, nonatomic) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, getter=isOnlyExtensionInContainingApp) BOOL onlyExtensionInContainingApp;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
