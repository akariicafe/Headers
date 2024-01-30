@class NSData;

@interface MFDAMessagePayloadFetchResponseImpl : NSObject <MFDAMessagePayloadFetchResponse> {
    BOOL streaming;
    BOOL streamingDone;
    NSData *data;
}

- (id)data;
- (void).cxx_destruct;
- (BOOL)streaming;
- (id)initWithData:(id)a0 streaming:(BOOL)a1 streamingDone:(BOOL)a2;
- (BOOL)streamingDone;

@end
