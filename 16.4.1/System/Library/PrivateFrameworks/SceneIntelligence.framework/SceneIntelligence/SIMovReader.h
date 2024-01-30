@class NSString, MOVStreamReader;

@interface SIMovReader : NSObject {
    NSString *_trackName;
}

@property (retain, nonatomic) MOVStreamReader *reader;

- (void).cxx_destruct;
- (id)initReaderWithVideoURL:(id)a0 andTrackName:(id)a1;
- (struct __CVBuffer { } *)readFrame:(struct { long long x0; int x1; unsigned int x2; long long x3; } *)a0;

@end
