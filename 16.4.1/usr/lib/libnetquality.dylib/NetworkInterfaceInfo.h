@class NSString, NSNumber;

@interface NetworkInterfaceInfo : NSObject

@property (retain) NSString *name;
@property (retain) NSString *networkAccessTechnology;
@property (retain) NSNumber *type;

+ (id)getInfoForInterface:(id)a0;
+ (id)initWithInterfaceName:(id)a0 interfaceType:(id)a1 networkAccessTechnology:(id)a2;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)describe;

@end
