@class NSDictionary;

@interface CRKInterfaceNameToIPAddressMap : NSObject {
    NSDictionary *mIPAddressesByInterfaceName;
}

+ (id)makeIPAddressesByInterfaceName;
+ (id)makeEnumerator;

- (id)init;
- (void).cxx_destruct;
- (id)IPAddressForInterfaceName:(id)a0;

@end
