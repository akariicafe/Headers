@interface PHFigDecoder : PHImageDecoder

+ (id)sharedDecoder;

- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)a0;
- (id)decodeImageFromData:(id)a0 orFileURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
