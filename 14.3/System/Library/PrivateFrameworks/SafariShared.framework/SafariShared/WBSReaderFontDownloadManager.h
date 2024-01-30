@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;

- (BOOL)hasOngoingRequestForFont:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)downloadProgressForFont:(id)a0;
- (void)downloadFont:(id)a0;

@end
