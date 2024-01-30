@class NSDate;

@interface SALCMLiveStreamingViewingContext : SALCMViewingContext

@property (copy, nonatomic) NSDate *eventStartTime;
@property (nonatomic) BOOL watchingLive;

+ (id)liveStreamingViewingContext;
+ (id)liveStreamingViewingContextWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
