@class NSString;

@interface PFAnalyticsEvent : NSObject {
    void /* unknown type, empty encoding */ payloadGenerator;
}

@property (class, nonatomic, readonly) PFAnalyticsEvent *globalRetentionPolicy;

@property (nonatomic, readonly) void /* unknown type, empty encoding */ name;
@property (nonatomic, copy) id /* block */ payloadGenerator;
@property (nonatomic, readonly) NSString *description;

+ (id)downloadedFileHasiPodLibraryURLWithDiscoveryPoint:(id)a0 path:(id)a1 source:(id)a2;
+ (id)drmKeyRecoveredWithGenerator:(id /* block */)a0;
+ (id)drmKeyRecoveredWithPayload:(id)a0;
+ (id)globalRetentionPolicy:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 generator:(id /* block */)a1;
- (id)initWithName:(id)a0 payload:(id)a1;

@end
