@class NSString;

@interface BlockedPlugin : NSObject

@property (readonly) NSString *bundleName;
@property (readonly) NSString *plugName;
@property (readonly) NSString *plugVersion;

- (void)dealloc;
- (id)init:(id)a0 plugName:(id)a1 plugVersion:(id)a2;

@end
