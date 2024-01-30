@interface VNTrackRectangleRequest : VNTrackingRequest

+ (const struct { unsigned long long x0; struct { int x0; int x1; } x1; struct { int x0; int x1; } x2; struct { int x0; int x1; } x3; } *)revisionAvailability;
+ (id)trackerTypeForRequestRevision:(unsigned long long)a0 error:(id *)a1;

- (id)initWithRectangleObservation:(id)a0;
- (id)initWithRectangleObservation:(id)a0 completionHandler:(id /* block */)a1;

@end
