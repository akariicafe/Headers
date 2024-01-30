@class NSExtensionContext;

@interface CacheDeleteServiceInfo : NSObject

@property (readonly, nonatomic) NSExtensionContext *extensionContext;
@property BOOL doNotQuery;

+ (id)serviceInfoWithExtensionContext:(id)a0;

- (id)initWithExtensionContext:(id)a0;
- (void).cxx_destruct;

@end
