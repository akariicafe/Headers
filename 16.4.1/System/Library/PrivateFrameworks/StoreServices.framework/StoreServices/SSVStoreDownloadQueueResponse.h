@class NSData, NSString, NSError, NSArray, NSOrderedSet, NSDictionary, NSObject, NSMutableOrderedSet, NSNumber;
@protocol OS_dispatch_queue;

@interface SSVStoreDownloadQueueResponse : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableOrderedSet *_downloads;
    NSError *_error;
    NSDictionary *_itemErrors;
    NSData *_keybag;
    NSArray *_rangesToLoad;
    BOOL _shouldCancelPurchaseBatch;
    BOOL _triggeredQueueCheck;
    NSNumber *_userIdentifier;
}

@property (readonly) NSOrderedSet *downloads;
@property NSString *storeCorrelationID;
@property (retain) NSError *error;
@property (readonly) NSData *keybag;
@property (readonly) NSArray *rangesToLoad;
@property BOOL shouldCancelPurchaseBatch;
@property BOOL triggeredQueueCheck;
@property (readonly) NSNumber *userIdentifier;
@property NSString *clientIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)_initStoreDownloadQueueResponse;
- (id)_errorWithFailureType:(id)a0 customerMessage:(id)a1;
- (id)errorForItemIdentifier:(id)a0;
- (id)initWithDictionary:(id)a0 userIdentifier:(id)a1;
- (id)initWithDictionary:(id)a0 userIdentifier:(id)a1 preferredAssetFlavor:(id)a2;
- (id)initWithError:(id)a0 userIdentifier:(id)a1;

@end
