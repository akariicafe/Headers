@class TSPData;

@interface OADExportedEmbeddedMediaFile : OADEmbeddedMediaFile {
    BOOL isAudioOnly;
}

@property (retain, nonatomic) TSPData *tspData;

- (void).cxx_destruct;
- (BOOL)isAudioOnly;
- (void)setIsAudioOnly:(BOOL)a0;

@end
