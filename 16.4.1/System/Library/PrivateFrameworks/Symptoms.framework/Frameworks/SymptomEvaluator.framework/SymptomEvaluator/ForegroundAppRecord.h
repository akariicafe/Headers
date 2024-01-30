@class NSString, NEPolicy;

@interface ForegroundAppRecord : NSObject {
    BOOL _isForeground;
    double _stateChangeTime;
    unsigned long long _policyId;
}

@property (retain, nonatomic) NSString *bundleName;
@property (readonly, nonatomic) double stateChangeTime;
@property (nonatomic) BOOL isForeground;
@property (nonatomic) BOOL foregroundSessionActivity;
@property (nonatomic) BOOL countedAsExploitingOutrank;
@property (nonatomic) BOOL countedAsNonExploitingOutrank;
@property (nonatomic) unsigned long long policyId;
@property (retain, nonatomic) NEPolicy *policy;
@property (nonatomic) long long connectionCount;
@property (nonatomic) long long closedConnectionCount;

- (id)description;
- (void).cxx_destruct;

@end
