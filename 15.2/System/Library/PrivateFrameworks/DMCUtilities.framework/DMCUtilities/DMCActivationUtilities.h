@class NSNumber, NSDictionary, NSMutableDictionary;

@interface DMCActivationUtilities : NSObject

@property (retain, nonatomic) NSNumber *hrnModeCache;
@property (nonatomic) BOOL isActivatedCache;
@property (retain, nonatomic) NSDictionary *activationRecordCache;
@property (retain, nonatomic) NSMutableDictionary *didBecomeReadyCallbacks;
@property (nonatomic) BOOL isReady;

+ (id)sharedInstance;

- (int)activationState;
- (void)_clearCache;
- (id)initPrivate;
- (void).cxx_destruct;
- (id)activationRecord;
- (void)addDidBecomeReadyKey:(id)a0 callback:(id /* block */)a1;
- (int)hrnMode;

@end
