@class NSURL, NSString;

@interface FCHLSStreamInf : NSObject {
    NSURL *_url;
    unsigned long long _bandwidth;
    unsigned long long _averageBandwidth;
    NSString *_codecs;
    NSString *_audio;
}

- (id)description;
- (void).cxx_destruct;

@end
