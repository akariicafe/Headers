@class NSURL, FCHLSKey, FCHLSMap;

@interface FCHLSSegment : NSObject {
    FCHLSMap *_map;
    NSURL *_url;
    double _duration;
    FCHLSKey *_key;
}

- (id)description;
- (void).cxx_destruct;

@end
