@class NSNumber, NSString;

@interface MPModelPlaybackPosition : MPModelObject

@property (nonatomic) double bookmarkTime;
@property (nonatomic) BOOL shouldRememberBookmarkTime;
@property (nonatomic) BOOL hasBeenPlayed;
@property (nonatomic) double startTime;
@property (copy, nonatomic) NSNumber *stopTime;
@property (copy, nonatomic) NSString *storeUbiquitousIdentifier;
@property (nonatomic) long long userPlayCount;

+ (id)__storeUbiquitousIdentifier_KEY;
+ (id)__startTime_KEY;
+ (id)__bookmarkTime_KEY;
+ (id)__hasBeenPlayed_KEY;
+ (id)__shouldRememberBookmarkTime_KEY;
+ (id)__stopTime_KEY;
+ (id)__userPlayCount_KEY;

@end
