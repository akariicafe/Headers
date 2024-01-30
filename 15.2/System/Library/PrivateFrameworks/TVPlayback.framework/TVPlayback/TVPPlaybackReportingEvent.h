@class NSString;

@interface TVPPlaybackReportingEvent : NSObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timestamp;
@property (retain, nonatomic) id value;
@property (nonatomic) long long type;
@property (nonatomic) double duration;
@property (nonatomic) long long durationMS;
@property (weak, nonatomic) TVPPlaybackReportingEvent *startEvent;
@property (nonatomic) BOOL isUIInteraction;

- (id)description;
- (void).cxx_destruct;

@end
