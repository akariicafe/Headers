@interface HDTinkerProfile : HDProfile

- (void)triggerDeletion;
- (void)awakeFromDisk;
- (id)pairedNRDeviceUUIDWithError:(id *)a0;
- (BOOL)setPairedNRDeviceUUID:(id)a0 error:(id *)a1;
- (id)dsidWithError:(id *)a0;
- (BOOL)setDSID:(id)a0 error:(id *)a1;

@end
