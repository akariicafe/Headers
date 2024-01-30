@interface PCSupportRequester : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInvalidated;
- (id)remoteObjectInterface;
- (void)policiesToEnforce:(id /* block */)a0;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
- (id)fetchGenderAndAgeGroupData;
- (void)policiesForContainerType:(id)a0 adType:(id)a1 adFormatType:(id)a2 completion:(id /* block */)a3;
- (void)connectionInterrupted;
- (id)init;

@end
