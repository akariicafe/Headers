@class SBKSyncTransaction, NSMutableDictionary, NSString, NSArray;

@interface SBKSyncResponseData : NSObject

@property (retain) NSMutableDictionary *responseOpEntiesByKey;
@property (readonly) SBKSyncTransaction *transaction;
@property (readonly, copy) NSString *syncAnchor;
@property (readonly) NSArray *updatedKeys;
@property (readonly) NSArray *conflictedKeys;
@property (readonly) NSArray *deletedKeys;
@property (readonly) NSArray *successfullyUpdatedKeys;
@property (readonly) NSArray *successfullyDeletedKeys;

+ (id)deserializedResponseBodyWithTransaction:(id)a0 responseDictionary:(id)a1 response:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTransaction:(id)a0 responseDictionary:(id)a1 response:(id)a2;
- (void)_deserializeResponseDictionary:(id)a0 response:(id)a1;
- (id)payloadDataForUpdateResponseKey:(id)a0;

@end
