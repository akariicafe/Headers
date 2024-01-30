@class CBCharacteristic, CBCentral, NSMutableData, NSNumber;

@interface CBATTRequest : NSObject

@property (retain, nonatomic) CBCharacteristic *characteristic;
@property (readonly, nonatomic) NSNumber *transactionID;
@property (nonatomic) BOOL ignoreResponse;
@property (readonly, nonatomic) CBCentral *central;
@property (readonly, nonatomic) unsigned long long offset;
@property (copy) NSMutableData *value;

- (id)description;
- (unsigned long long)endOffset;
- (void).cxx_destruct;
- (id)initWithCentral:(id)a0 characteristic:(id)a1 offset:(unsigned long long)a2 transactionID:(id)a3;
- (void)appendValueData:(id)a0;

@end
