@class HRProfile;

@interface HRProfileManager : NSObject {
    void /* unknown type, empty encoding */ profileCache;
    void /* unknown type, empty encoding */ profileObjectsCache;
    void /* unknown type, empty encoding */ managerQueue;
    void /* unknown type, empty encoding */ lock;
}

@property (class, nonatomic, readonly) HRProfileManager *sharedInstance;

@property (nonatomic, readonly) HRProfile *primaryProfile;
@property (nonatomic, retain) void /* unknown type, empty encoding */ currentProfile;

- (void)switchCurrentProfileWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)profileWithProfileIdentifier:(id)a0;
- (id)profileWithHealthStore:(id)a0;

@end
