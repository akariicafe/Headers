@interface CNKFeatures : NSObject {
    void /* unknown type, empty encoding */ defaults;
}

@property (class, nonatomic, readonly) CNKFeatures *sharedInstance;

@property (nonatomic, readonly) BOOL useBannersForIncomingCalls;

- (id)init;
- (void).cxx_destruct;

@end
