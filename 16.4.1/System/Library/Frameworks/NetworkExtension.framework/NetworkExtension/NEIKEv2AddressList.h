@class NSMutableArray;

@interface NEIKEv2AddressList : NSObject {
    NSMutableArray *_ipv6AddressList;
    NSMutableArray *_ipv4AddressList;
    unsigned long long _ipv6AddressIndex;
    unsigned long long _ipv4AddressIndex;
}

- (void).cxx_destruct;

@end
