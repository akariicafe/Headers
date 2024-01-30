@class SBKSyncTransaction, NSMutableDictionary, NSString, NSArray;

@interface SBKSyncResponseData : NSObject

@property (retain, nonatomic) NSMutableDictionary *responseOpEntiesByKey;
@property (readonly, nonatomic) SBKSyncTransaction *transaction;
@property (readonly, copy, nonatomic) NSString *syncAnchor;
@property (readonly, nonatomic) NSArray *updatedKeys;
@property (readonly, nonatomic) NSArray *conflictedKeys;
@property (readonly, nonatomic) NSArray *deletedKeys;
@property (readonly, nonatomic) NSArray *successfullyUpdatedKeys;
@property (readonly, nonatomic) NSArray *successfullyDeletedKeys;

+ (id)deserializedResponseBodyWithTransaction:(id)a0 responseDictionary:(id)a1 response:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTransaction:(id)a0 responseDictionary:(id)a1 response:(id)a2;
- (id)payloadDataForUpdateResponseKey:(id)a0;
- (void)_deserializeResponseDictionary:(id)a0 response:(id)a1;

@end
