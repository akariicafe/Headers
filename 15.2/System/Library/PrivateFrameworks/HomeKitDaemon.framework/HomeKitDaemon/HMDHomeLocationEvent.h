@class NSString, NSArray, CLLocation;

@interface HMDHomeLocationEvent : HMMLogEvent <HMDAWDLogEvent>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *tuples;
@property (retain, nonatomic) CLLocation *selectedHomeLocation;
@property (nonatomic) unsigned long long numOfIterations;
@property (retain, nonatomic) CLLocation *nearestLOI;

+ (id)eventWithLocationTuples:(id)a0 selectedHomeLocation:(id)a1 numberOfIterations:(unsigned long long)a2 nearestLOI:(id)a3;

@end
