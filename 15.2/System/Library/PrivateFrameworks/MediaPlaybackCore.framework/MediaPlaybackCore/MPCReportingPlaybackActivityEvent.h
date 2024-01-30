@class NSString, ICPlayActivityEvent;

@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent>

@property (copy, nonatomic) ICPlayActivityEvent *playActivityEvent;
@property (nonatomic) BOOL shouldReportToStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
