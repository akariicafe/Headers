@class NSArray, NSData, NSNumber, NSMutableArray;

@interface CBMutableCharacteristic : CBCharacteristic

@property (retain) NSNumber *ID;
@property (nonatomic) unsigned long long permissions;
@property (readonly, retain) NSMutableArray *subscribedCentrals;
@property (nonatomic) unsigned long long properties;
@property (retain) NSData *value;
@property (retain) NSArray *descriptors;

- (BOOL)handleCentralSubscribed:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)handlePowerNotOn;
- (BOOL)handleCentralUnsubscribed:(id)a0;
- (id)description;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithService:(id)a0 dictionary:(id)a1;
- (id)initWithType:(id)a0 properties:(unsigned long long)a1 value:(id)a2 permissions:(unsigned long long)a3;

@end
