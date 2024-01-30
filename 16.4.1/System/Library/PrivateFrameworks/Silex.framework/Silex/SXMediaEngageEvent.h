@class NSString, NSError;

@interface SXMediaEngageEvent : SXMediaEvent

@property (nonatomic) unsigned long long userAction;
@property (nonatomic) double mediaTimePlayed;
@property (nonatomic) unsigned long long mediaPlayMethod;
@property (retain, nonatomic) NSString *mediaPauseMethod;
@property (retain, nonatomic) NSString *mediaResumeMethod;
@property (nonatomic) unsigned long long mediaPausePosition;
@property (nonatomic) unsigned long long mediaResumePosition;
@property (nonatomic) double mediaFrameRate;
@property (nonatomic) double mediaDuration;
@property (nonatomic) BOOL muted;
@property (nonatomic) double volume;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;

@end
