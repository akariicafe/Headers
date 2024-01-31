@class AccessoryIAPInterface;

@interface IAPDataBuffer : NSObject {
    char *_dataBufferIn;
    unsigned long long _dataBufferInLen;
}

@property (weak, nonatomic) AccessoryIAPInterface *parentiAPInterface;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithiAPInterface:(id)a0;

@end
