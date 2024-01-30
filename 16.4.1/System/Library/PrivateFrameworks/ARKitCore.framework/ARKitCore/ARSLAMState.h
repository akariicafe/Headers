@class NSSet, NSString, NSDictionary, ARPointCloud;

@interface ARSLAMState : NSObject <ARResultData, ARQATraceable, NSSecureCoding> {
    double _minVergenceAngleCosine;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int trackingState;
@property (readonly, nonatomic) const struct CV3DSLAMStateContext { } *slamState;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSSet *updatedAnchors;
@property (readonly, nonatomic) NSSet *addedAnchors;
@property (readonly, nonatomic) NSSet *removedAnchors;
@property (readonly, nonatomic) NSSet *externalAnchors;
@property (readonly, nonatomic) unsigned int slamMode;
@property (readonly, nonatomic) unsigned int visualSLAMState;
@property (readonly, nonatomic) ARPointCloud *pointCloud;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *tracingEntry;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)addedAnchorsForGroupIdentifiers:(id)a0;
- (id)externalAnchorsForGroupIdentifiers:(id)a0;
- (id)initWithSLAMState:(struct CV3DSLAMStateContext { } *)a0;
- (id)removedAnchorsForGroupIdentifiers:(id)a0;
- (BOOL)setSLAMState:(struct CV3DSLAMStateContext { } *)a0;
- (id)updatedAnchorsForGroupIdentifiers:(id)a0;

@end
