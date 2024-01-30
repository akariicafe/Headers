@class NSString, NSNumber;

@interface NetworkInterfaceInfo : NSObject

@property (retain) NSString *name;
@property (retain) NSString *networkAccessTechnology;
@property (retain) NSNumber *type;

+ (id)getInfoForInterface:(id)a0;
+ (id)initWithInterfaceName:(id)a0 interfaceType:(id)a1 networkAccessTechnology:(id)a2;

- (void).cxx_destruct;
- (id)describe;

@end
