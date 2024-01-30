@interface PCSupportRequester : APXPCActionRequester

+ (id)machService;
+ (BOOL)canShareConnection;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (void)policiesForContainerType:(id)a0 adType:(id)a1 adFormatType:(id)a2 completion:(id /* block */)a3;
- (id)remoteObjectInterface;
- (void)addClientToSegments:(id)a0 replaceExisting:(BOOL)a1 privateSegment:(BOOL)a2;
- (void)fetchConfigurationForClass:(Class)a0 completion:(id /* block */)a1;
- (void)fetchGenderAndAgeGroupData:(id /* block */)a0;
- (id)init;
- (id)fetchGenderAndAgeGroupData;
- (void)policiesToEnforce:(id /* block */)a0;

@end
