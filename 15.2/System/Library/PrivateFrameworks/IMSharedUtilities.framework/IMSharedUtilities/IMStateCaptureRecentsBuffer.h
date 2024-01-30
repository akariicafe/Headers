@class NSPointerArray, NSString;

@interface IMStateCaptureRecentsBuffer : NSObject

@property (nonatomic) unsigned long long nextInsertionIndex;
@property (retain, nonatomic) NSPointerArray *trackedObjects;
@property (nonatomic) unsigned long long *handles;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long maximumNumberOfTrackedObjects;

- (void).cxx_destruct;
- (void)registerStateCaptureBlockWithQueue:(id)a0;
- (id)initWithTitle:(id)a0 maximumNumberOfTrackedObjects:(unsigned long long)a1 queue:(id)a2;
- (void)promoteRecentObject:(id)a0;
- (void)dealloc;

@end
