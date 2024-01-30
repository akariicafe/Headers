@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSOperationProgress : NSObject <SSXPCCoding, NSCopying> {
    BOOL _canPause;
    double _changeRate;
    long long _currentValue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _estimatedTimeRemaining;
    long long _maxValue;
    long long _normalizedCurrentValue;
    long long _normalizedMaxValue;
    long long _operationType;
    NSMutableArray *_snapshotTimes;
    NSMutableArray *_snapshotValues;
    long long _units;
}

@property BOOL canPause;
@property long long operationType;
@property double changeRate;
@property long long currentValue;
@property double estimatedTimeRemaining;
@property long long maxValue;
@property long long units;
@property long long normalizedCurrentValue;
@property long long normalizedMaxValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)_updateStatisticsFromSnapshots;
- (void)resetSnapshots;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)snapshot;
- (void)dealloc;

@end
