@class NSString;

@interface RPDeviceKeyValueStore_Internal : NSObject {
    void /* unknown type, empty encoding */ kvs;
}

@property (nonatomic, readonly) NSString *description;

- (id)getKeyValuePairsWithDomain:(id)a0;
- (id)isValueSensitiveWithDomain:(id)a0 key:(id)a1;
- (id)init;
- (id)getValueWithDomain:(id)a0 key:(id)a1;
- (void).cxx_destruct;

@end
