@class MFMessageFileWrapper, NSMutableDictionary;

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary *_cache;
}

@property (retain, nonatomic) MFMessageFileWrapper *fileWrapper;

+ (unsigned long long)precedenceLevel;

- (unsigned int)approximateSize;
- (void)download;
- (BOOL)isPlaceholder;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)cachedValueForKey:(id)a0;
- (void)setCachedValue:(id)a0 forKey:(id)a1;
- (id)fileWrapperForcingDownload:(BOOL)a0;
- (BOOL)hasBeenDownloaded;
- (id)mimePart;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)textEncodingNameForData:(id)a0 mimeType:(id)a1;
- (BOOL)needsRedownload;
- (id)initWithWrapper:(id)a0;
- (void)inlineDisplayData:(id *)a0 mimeType:(id *)a1;
- (void)setMimePart:(id)a0;
- (id)textEncodingGuess;

@end
