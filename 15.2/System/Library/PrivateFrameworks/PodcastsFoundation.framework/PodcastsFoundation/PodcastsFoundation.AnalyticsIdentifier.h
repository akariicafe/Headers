@class NSString, _TtC18PodcastsFoundation19AnalyticsIdentifier;

@interface PodcastsFoundation.AnalyticsIdentifier : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ clientId;
    void /* unknown type, empty encoding */ userId;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation19AnalyticsIdentifier *sharedInstance;

@property (nonatomic, copy) NSString *clientId;
@property (nonatomic, copy) NSString *userId;
@property (nonatomic) void /* unknown type, empty encoding */ userAllowsPersonalization;
@property (nonatomic) void /* unknown type, empty encoding */ userUnder13YearsOld;
@property (nonatomic) void /* unknown type, empty encoding */ userIsManagedAccount;

- (void)resetIfNeeded;
- (void).cxx_destruct;
- (id)init;
- (void)updateIdentifiers;
- (void)resetIdentifiers;

@end
