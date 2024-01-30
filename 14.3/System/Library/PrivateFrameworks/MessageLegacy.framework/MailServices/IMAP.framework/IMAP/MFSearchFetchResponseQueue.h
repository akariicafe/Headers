@interface MFSearchFetchResponseQueue : MFFetchResponseQueue

- (id)init;
- (BOOL)shouldAddUID:(unsigned int)a0;
- (id)messageToSyncFlagsForUID:(unsigned int)a0;

@end
