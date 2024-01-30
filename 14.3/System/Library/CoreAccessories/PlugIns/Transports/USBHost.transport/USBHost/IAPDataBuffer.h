@class AccessoryIAPInterface;

@interface IAPDataBuffer : NSObject {
    char *_dataBufferIn;
    unsigned long long _dataBufferInLen;
}

@property (weak, nonatomic) AccessoryIAPInterface *parentiAPInterface;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithiAPInterface:(id)a0;

@end
