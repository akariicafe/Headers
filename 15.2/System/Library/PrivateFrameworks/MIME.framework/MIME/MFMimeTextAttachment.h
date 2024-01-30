@interface MFMimeTextAttachment : MFMessageTextAttachment

- (void)download;
- (unsigned int)approximateSize;
- (id)initWithMimePart:(id)a0;
- (BOOL)hasBeenDownloaded;
- (id)_displayedMimePart;

@end
