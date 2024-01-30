@interface MFMimeTextAttachment : MFMessageTextAttachment

- (unsigned int)approximateSize;
- (void)download;
- (id)_displayedMimePart;
- (BOOL)hasBeenDownloaded;
- (id)initWithMimePart:(id)a0;

@end
