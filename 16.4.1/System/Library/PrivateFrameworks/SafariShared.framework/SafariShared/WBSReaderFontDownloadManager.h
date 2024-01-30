@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {
    NSMutableDictionary *_fontFamilyToProgress;
}

+ (id)sharedManager;

- (void)downloadFont:(id)a0;
- (double)downloadProgressForFont:(id)a0;
- (BOOL)hasOngoingRequestForFont:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
