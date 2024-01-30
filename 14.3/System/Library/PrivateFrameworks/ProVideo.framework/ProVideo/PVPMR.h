@class NSMutableString;

@interface PVPMR : NSObject {
    BOOL gPVPMR_ENABLED;
    NSMutableString *_buffer;
}

+ (id)sharedInstance;

- (void)setLevel:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)writePMRInfoToFile:(id)a0 pmrString:(id)a1;
- (int)getLevel;
- (id)reportPMR:(double)a0 pmrKey:(id)a1 pmrComment:(id)a2;
- (void)writePMRInfoToBuffer:(id)a0;
- (void)writeBufferToPermanentStorage;

@end
