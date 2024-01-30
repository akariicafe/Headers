@class HDAttachmentManager;

@interface HDTinkerProfile : HDProfile {
    HDAttachmentManager *_attachmentManager;
}

- (id)attachmentManager;
- (void).cxx_destruct;
- (void)awakeFromDisk;
- (id)dsidWithError:(id *)a0;
- (id)initWithDirectoryPath:(id)a0 medicalIDDirectoryPath:(id)a1 daemon:(id)a2 profileIdentifier:(id)a3;
- (id)pairedNRDeviceUUIDWithError:(id *)a0;
- (BOOL)setDSID:(id)a0 error:(id *)a1;
- (BOOL)setPairedNRDeviceUUID:(id)a0 error:(id *)a1;

@end
