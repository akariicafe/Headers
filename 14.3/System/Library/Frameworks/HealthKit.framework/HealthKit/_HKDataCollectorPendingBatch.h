@class NSUUID, NSArray, NSDictionary, HKDevice;

@interface _HKDataCollectorPendingBatch : NSObject

@property (readonly, copy, nonatomic) NSUUID *batchUUID;
@property (readonly, copy, nonatomic) NSArray *data;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, copy, nonatomic) id /* block */ completion;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)a0 data:(id)a1 metadata:(id)a2 device:(id)a3 completion:(id /* block */)a4;

@end
