@class MFMessageFileWrapper, NSMutableDictionary;

@interface MFMessageTextAttachment : NSObject {
    NSMutableDictionary *_cache;
}

@property (retain, nonatomic) MFMessageFileWrapper *fileWrapper;

+ (unsigned long long)precedenceLevel;

- (void)download;
- (id)init;
- (void).cxx_destruct;
- (id)textEncodingNameForData:(id)a0 mimeType:(id)a1;
- (void)setCachedValue:(id)a0 forKey:(id)a1;
- (BOOL)isPlaceholder;
- (id)description;
- (id)mimePart;
- (id)cachedValueForKey:(id)a0;
- (id)fileWrapperForcingDownload:(BOOL)a0;
- (BOOL)hasBeenDownloaded;
- (BOOL)shouldDownloadAttachmentOnDisplay;
- (id)initWithWrapper:(id)a0;
- (void)setMimePart:(id)a0;
- (unsigned int)approximateSize;
- (BOOL)needsRedownload;
- (void)inlineDisplayData:(id *)a0 mimeType:(id *)a1;
- (id)persistentUniqueIdentifier;
- (id)textEncodingGuess;

@end
