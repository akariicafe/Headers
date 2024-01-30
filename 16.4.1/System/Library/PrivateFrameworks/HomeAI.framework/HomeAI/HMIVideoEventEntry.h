@class NSString;

@interface HMIVideoEventEntry : HMFObject <HMIVideoEvent>

@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } time;
@property (readonly) id value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithValue:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end
