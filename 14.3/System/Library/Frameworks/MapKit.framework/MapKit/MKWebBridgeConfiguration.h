@class NSString;

@interface MKWebBridgeConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bridgeVersion;
@property (readonly, copy, nonatomic) NSString *nativeControllerName;
@property (readonly, copy, nonatomic) NSString *webControllerName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithNativeControllerName:(id)a0 webControllerName:(id)a1 bridgeVersion:(id)a2;

@end
