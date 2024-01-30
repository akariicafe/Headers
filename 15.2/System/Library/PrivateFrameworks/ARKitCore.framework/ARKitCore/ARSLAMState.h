@class NSSet, NSString, NSDictionary;

@interface ARSLAMState : NSObject <ARResultData, ARQATraceable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) const struct CV3DSLAMStateContext { } *slamState;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSSet *updatedAnchors;
@property (readonly, nonatomic) NSSet *addedAnchors;
@property (readonly, nonatomic) NSSet *removedAnchors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithSLAMState:(struct CV3DSLAMStateContext { } *)a0;
- (BOOL)setSLAMState:(struct CV3DSLAMStateContext { } *)a0;

@end
