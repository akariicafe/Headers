@class NSMutableSet;

@interface _MDLProbeCluster : NSObject

@property void /* unknown type, empty encoding */ centroid;
@property (retain) NSMutableSet *probes;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToCluster:(id)a0;
- (void)calculateCentroidNotIncludingSamplesinArray:(id)a0;

@end
