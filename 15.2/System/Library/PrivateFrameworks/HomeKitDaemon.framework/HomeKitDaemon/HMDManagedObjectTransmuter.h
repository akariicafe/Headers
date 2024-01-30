@class HMDManagedObjectCodingModel;

@interface HMDManagedObjectTransmuter : NSObject {
    HMDManagedObjectCodingModel *_model;
}

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (BOOL)encodeRootObject:(id)a0 withWriter:(id)a1;
- (id)decodeRootEntity:(id)a0 fromReader:(id)a1;
- (BOOL)encodeRootObject:(id)a0 forEntity:(id)a1 withWriter:(id)a2;
- (BOOL)updateRootObject:(id)a0 fromReader:(id)a1;
- (id)insertOrUpdateRootObjectForEntity:(id)a0 inContext:(id)a1 fromReader:(id)a2;

@end
