@interface PHImageDecoder : NSObject

+ (id)sharedDecoder;
+ (id)sharedFigDecoder;

- (id)decodeImageFromData:(id)a0 orFileURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)a0;

@end
