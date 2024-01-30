@class NSUUID, NSArray, NSDictionary, HKDevice;

@interface _HKDataCollectorPendingBatch : NSObject

@property (readonly, copy, nonatomic) NSUUID *batchUUID;
@property (readonly, copy, nonatomic) NSArray *data;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) HKDevice *device;
@property (readonly, copy, nonatomic) NSArray *completions;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)batchByAddingData:(id)a0 completion:(id /* block */)a1;
- (void)callCompletionsWithSuccess:(BOOL)a0 error:(id)a1;
- (id)initWithIdentifier:(id)a0 data:(id)a1 metadata:(id)a2 device:(id)a3 completion:(id /* block */)a4;
- (id)initWithIdentifier:(id)a0 data:(id)a1 metadata:(id)a2 device:(id)a3 completions:(id)a4;

@end
