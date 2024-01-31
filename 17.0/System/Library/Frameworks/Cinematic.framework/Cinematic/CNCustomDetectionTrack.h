@class NSArray;

@interface CNCustomDetectionTrack : CNDetectionTrack

@property (readonly) NSArray *allDetections;

- (BOOL)_integrityCheck;
- (id)_internalCustomTrack;
- (id)initWithDetections:(id)a0 smooth:(BOOL)a1;

@end
