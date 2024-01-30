@class AVAssetReaderTrackOutput, AVAssetReader, AVAssetReaderOutputMetadataAdaptor;

@interface VCPMetaTrackDecoder : NSObject {
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_readerOutput;
    AVAssetReaderOutputMetadataAdaptor *_readerOutputAdaptor;
}

- (long long)status;
- (void).cxx_destruct;
- (id)initWithTrack:(id)a0;
- (void)dealloc;
- (id)copyNextMetadataGroup;

@end
