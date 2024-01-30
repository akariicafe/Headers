@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    BOOL streaming;
    BOOL streamingDone;
    NSData *data;
}

- (void).cxx_destruct;
- (BOOL)streaming;
- (id)data;
- (BOOL)streamingDone;
- (id)initWithData:(id)a0 streaming:(BOOL)a1 streamingDone:(BOOL)a2;

@end
