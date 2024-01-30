@class NSString, NSTimer;
@protocol WBSParsecABGroupStore;

@interface WBSParsecABGroupManager : NSObject <WBSParsecABGroupStoreClient> {
    NSTimer *_shuffleTimer;
}

@property (class, readonly, nonatomic) unsigned long long ephemeralGroupIdentifier;

@property (readonly, nonatomic) id<WBSParsecABGroupStore> groupStore;
@property (readonly, nonatomic) unsigned long long groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_weightedRandomIdentifier;

- (void)abGroupStoreDidUpdateGroupIdentifier:(id)a0;
- (void)_scheduleShuffleTimer;
- (void)shuffleGroup;
- (void).cxx_destruct;
- (void)_postDidChangeGroupIdentifierNotification;
- (id)initWithGroupStore:(id)a0;
- (void)_generateAndSaveNewGroupIdentifier;

@end
