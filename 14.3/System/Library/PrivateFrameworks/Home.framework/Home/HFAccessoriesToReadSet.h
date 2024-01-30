@class NSNumber, NSMutableDictionary;

@interface HFAccessoriesToReadSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSNumber *transportKey;

- (id)initWithTransportType:(id)a0;
- (void).cxx_destruct;
- (long long)count;
- (void)markCharacteristicAsRead:(id)a0 withLogger:(id)a1;
- (void)addCharacteristic:(id)a0;

@end
