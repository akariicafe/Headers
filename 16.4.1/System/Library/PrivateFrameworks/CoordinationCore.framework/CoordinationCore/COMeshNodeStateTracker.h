@class COMeshNode, COBallot, NSObject;
@protocol OS_dispatch_source, COMeshNodeStateTrackerDelegate;

@interface COMeshNodeStateTracker : NSObject

@property (nonatomic) long long status;
@property (nonatomic) unsigned long long backoffBucket;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *backoffTimer;
@property (readonly, nonatomic) COMeshNode *node;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long electionStage;
@property (weak, nonatomic) id<COMeshNodeStateTrackerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long totalBackedOffTime;
@property (copy, nonatomic) id /* block */ backoffResponse;
@property (nonatomic) unsigned long long lastGenerationSent;
@property (copy, nonatomic) COBallot *lastBallotSent;
@property (nonatomic) unsigned long long lastGenerationReceived;
@property (copy, nonatomic) COBallot *lastBallotReceived;
@property (nonatomic) double lastHeard;
@property (nonatomic, getter=hasOutstandingProbe) BOOL outstandingProbe;
@property (nonatomic, getter=hasOutstandingRequest) BOOL outstandingRequest;

- (id)initWithNode:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)didFireBackoffTimer;
- (void)resetBackoffInformation;

@end
