@interface LiveFSUserClient : NSObject {
    unsigned int ourPort;
}

+ (id)defaultClient;

- (id)init;
- (void)dealloc;
- (int)getUserClientPort;
- (int)checkUserClientPort;
- (int)setMainMachPort:(unsigned int)a0 forDomain:(id)a1;
- (int)callStructMethod:(unsigned int)a0 inStruct:(const void *)a1 inSize:(unsigned long long)a2 outStruct:(void *)a3 outStructSize:(unsigned long long *)a4;

@end
