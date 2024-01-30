@class NSString;

@interface ARSLAMState : NSObject <ARResultData>

@property (readonly, nonatomic) const struct CV3DSLAMStateContext { } *slamState;
@property (nonatomic) double timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithSLAMState:(struct CV3DSLAMStateContext { } *)a0;
- (void)setSLAMState:(struct CV3DSLAMStateContext { } *)a0;

@end
