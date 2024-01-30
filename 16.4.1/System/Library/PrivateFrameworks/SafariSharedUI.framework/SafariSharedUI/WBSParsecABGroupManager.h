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

- (void).cxx_destruct;
- (void)_generateAndSaveNewGroupIdentifier;
- (void)_postDidChangeGroupIdentifierNotification;
- (void)_scheduleShuffleTimer;
- (void)abGroupStoreDidUpdateGroupIdentifier:(id)a0;
- (id)initWithGroupStore:(id)a0;
- (void)shuffleGroup;

@end
