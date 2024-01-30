@class NSString, NSNumber;

@interface PPMediaPlayerResponse : NSObject {
    unsigned int _state;
    NSString *_title;
    NSString *_artist;
    NSString *_album;
    NSString *_bundleID;
    NSString *_playerID;
    NSNumber *_storeItemID;
    double _duration;
}

- (BOOL)isEqualToResponse:(id)a0;
- (void).cxx_destruct;

@end
