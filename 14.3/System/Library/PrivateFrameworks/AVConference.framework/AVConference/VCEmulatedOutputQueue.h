@interface VCEmulatedOutputQueue : VCEmulatedNetworkElement

@property (readonly, nonatomic) unsigned int numberOfPacketsInOutputQueue;

- (id)copyPacketFromPop;
- (void)runUntilTime:(double)a0;
- (void)connectFrom:(id)a0;

@end
