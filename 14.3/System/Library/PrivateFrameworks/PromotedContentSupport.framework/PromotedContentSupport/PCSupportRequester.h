@interface PCSupportRequester : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInvalidated;
- (id)init;
- (void)connectionInterrupted;
- (id)remoteObjectInterface;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
- (id)fetchSegmentData;

@end
