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

- (id)init;
- (void).cxx_destruct;
- (id)profileWithHealthStore:(id)a0;
- (id)profileWithProfileIdentifier:(id)a0;
- (void)switchCurrentProfileWithIdentifier:(id)a0;

@end
