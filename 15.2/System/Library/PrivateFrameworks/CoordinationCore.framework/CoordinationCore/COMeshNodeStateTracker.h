@class COBallot, COMeshNode;
@protocol COMeshNodeStateTrackerDelegate;

@interface COMeshNodeStateTracker : NSObject

@property (nonatomic) long long status;
@property (readonly, nonatomic) COMeshNode *node;
@property (nonatomic) unsigned long long state;
@property (weak, nonatomic) id<COMeshNodeStateTrackerDelegate> delegate;
@property (nonatomic) unsigned long long generation;
@property (copy, nonatomic) COBallot *ballot;
@property (nonatomic) double lastHeard;
@property (nonatomic, getter=hasOutstandingProbe) BOOL outstandingProbe;

- (id)description;
- (id)initWithNode:(id)a0;
- (void).cxx_destruct;

@end
