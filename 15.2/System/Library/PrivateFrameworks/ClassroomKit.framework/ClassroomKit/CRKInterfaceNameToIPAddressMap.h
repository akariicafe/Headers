@class NSDictionary;

@interface CRKInterfaceNameToIPAddressMap : NSObject {
    NSDictionary *mIPAddressesByInterfaceName;
}

+ (id)makeIPAddressesByInterfaceName;
+ (id)makeEnumerator;

- (void).cxx_destruct;
- (id)init;
- (id)IPAddressForInterfaceName:(id)a0;

@end
