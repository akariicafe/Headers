@class NSString, NSNumber, LSApplicationProxy;

@interface FBKInstalledApp : NSObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) LSApplicationProxy *applicationProxy;
@property (readonly) NSNumber *adamID;

+ (id)_searchIdentifierInAppURL:(id)a0;
+ (id)_searchVersionInAppURL:(id)a0 identifier:(id)a1;
+ (id)appWithAppProxy:(id)a0;

- (BOOL)isEqualTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isAppleApp;
- (BOOL)isIWorkApp;

@end
