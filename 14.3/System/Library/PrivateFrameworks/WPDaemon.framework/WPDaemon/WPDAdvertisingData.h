@class NSMutableData, NSMutableSet, NSData;

@interface WPDAdvertisingData : NSObject

@property (retain) NSMutableData *internalData;
@property (retain) NSMutableSet *types;
@property long long advertRate;
@property (readonly, getter=getData) NSData *data;
@property BOOL isRanging;
@property BOOL assertPower;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqualToData:(id)a0;
- (void)addAdvertisingRequest:(id)a0;
- (id)description;
- (BOOL)isValidWithAdditionalRequest:(id)a0;

@end
