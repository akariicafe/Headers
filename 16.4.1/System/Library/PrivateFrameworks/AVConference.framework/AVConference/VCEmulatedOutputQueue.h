@interface VCEmulatedOutputQueue : VCEmulatedNetworkElement

@property (readonly, nonatomic) unsigned int numberOfPacketsInOutputQueue;

- (void)connectFrom:(id)a0;
- (id)copyPacketFromPop;
- (void)runUntilTime:(double)a0;

@end
