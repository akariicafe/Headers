@class NSNumber, NSMutableDictionary;

@interface HFAccessoriesToReadSet : NSObject

@property (retain, nonatomic) NSMutableDictionary *accessories;
@property (retain, nonatomic) NSNumber *transportKey;

- (long long)count;
- (void).cxx_destruct;
- (id)initWithTransportType:(id)a0;
- (void)addCharacteristic:(id)a0;
- (void)markCharacteristicAsRead:(id)a0 withLogger:(id)a1;

@end
