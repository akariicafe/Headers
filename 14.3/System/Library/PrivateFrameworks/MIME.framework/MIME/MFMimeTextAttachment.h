@interface MFMimeTextAttachment : MFMessageTextAttachment

- (void)download;
- (id)initWithMimePart:(id)a0;
- (BOOL)hasBeenDownloaded;
- (id)_displayedMimePart;
- (unsigned int)approximateSize;
- (id)persistentUniqueIdentifier;

@end
