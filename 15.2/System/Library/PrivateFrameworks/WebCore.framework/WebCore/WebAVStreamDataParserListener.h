@class NSString, AVStreamDataParser;

@interface WebAVStreamDataParserListener : NSObject <AVStreamDataParserOutputHandling> {
    AVStreamDataParser *_parser;
}

@property void *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParser:(id)a0 parent:(void *)a1;
- (void)streamDataParser:(id)a0 didParseStreamDataAsAsset:(id)a1;
- (void)streamDataParser:(id)a0 didFailToParseStreamDataWithError:(id)a1;
- (void)streamDataParser:(id)a0 didParseStreamDataAsAsset:(id)a1 withDiscontinuity:(BOOL)a2;
- (void)streamDataParser:(id)a0 didProvideMediaData:(struct opaqueCMSampleBuffer { } *)a1 forTrackID:(int)a2 mediaType:(id)a3 flags:(unsigned long long)a4;
- (void)streamDataParserWillProvideContentKeyRequestInitializationData:(id)a0 forTrackID:(int)a1;
- (void)streamDataParser:(id)a0 didProvideContentKeyRequestInitializationData:(id)a1 forTrackID:(int)a2;
- (void)invalidate;
- (void)dealloc;

@end
