@class NSData, NSMutableData;

@interface NEIKEv2DHKeys : NSObject {
    int _desc;
    int _type;
    int _gen1;
    int _gen2;
    NSData *_prime;
    NSData *_curveA;
    NSData *_curveB;
    NSData *_order;
    NSMutableData *_publicKey;
    unsigned long long _publicKeySize;
    struct OpaqueSecDHContext { } *_context;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
