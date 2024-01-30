@class NSString, NSMutableArray;

@interface HMIPersonTracker : HMFObject <HMFLogging>

@property (readonly) NSMutableArray *previousPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (void)trackNewPersons:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 timeStamp:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)setBlobID:(id)a0 atIndex:(unsigned long long)a1;
- (id)getBlobIDAtIndex:(unsigned long long)a0;

@end
