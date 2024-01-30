@interface NRConnectivitySubscriber : NSObject {
    BOOL _connected;
    unsigned long long _dropoutCounter;
}

+ (BOOL)getDropoutCounter:(unsigned long long *)a0;

- (id)init;

@end
