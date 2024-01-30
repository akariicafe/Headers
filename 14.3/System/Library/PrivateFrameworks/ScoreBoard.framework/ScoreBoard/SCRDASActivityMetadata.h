@class SCRActivity, _DASActivity;

@interface SCRDASActivityMetadata : NSObject

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) SCRActivity *activity;
@property (retain, nonatomic) _DASActivity *dasActivity;

- (void).cxx_destruct;
- (id)description;

@end
