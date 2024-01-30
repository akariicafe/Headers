@class MFMessageFileWrapper, NSMutableDictionary;

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary *_cache;
}

@property (retain, nonatomic) MFMessageFileWrapper *fileWrapper;

+ (unsigned long long)precedenceLevel;

- (void)setCachedValue:(id)a0 forKey:(id)a1;
- (BOOL)isPlaceholder;
- (id)cachedValueForKey:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)mimePart;
- (void)download;
- (unsigned int)approximateSize;
- (id)fileWrapperForcingDownload:(BOOL)a0;
- (BOOL)hasBeenDownloaded;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingNameForData:(id)a0 mimeType:(id)a1;
- (id)initWithWrapper:(id)a0;
- (void)setMimePart:(id)a0;
- (BOOL)needsRedownload;
- (void)inlineDisplayData:(id *)a0 mimeType:(id *)a1;
- (id)textEncodingGuess;

@end
