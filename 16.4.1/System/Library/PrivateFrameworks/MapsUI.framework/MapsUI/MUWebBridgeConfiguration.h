@class NSString;

@interface MUWebBridgeConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *bridgeVersion;
@property (readonly, copy, nonatomic) NSString *nativeControllerName;
@property (readonly, copy, nonatomic) NSString *webControllerName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithNativeControllerName:(id)a0 webControllerName:(id)a1 bridgeVersion:(id)a2;

@end
