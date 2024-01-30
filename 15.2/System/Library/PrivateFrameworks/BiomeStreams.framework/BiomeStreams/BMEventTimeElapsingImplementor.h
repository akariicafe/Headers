@class NSString, NSDateInterval;

@interface BMEventTimeElapsingImplementor : BMEventBase <BMEventTimeElapsing>

@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (id)init;

@end
