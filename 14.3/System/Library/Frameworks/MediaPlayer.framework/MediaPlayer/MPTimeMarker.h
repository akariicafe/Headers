@class NSString, NSURL, NSDictionary;

@interface MPTimeMarker : NSObject

@property (readonly, nonatomic) double comparableTime;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long index;
@property (readonly, nonatomic) BOOL hasArtworkAtPlaybackTime;
@property (nonatomic) double time;
@property (readonly, nonatomic) double maxTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) long long markerType;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMarkerType:(long long)a0;
- (id)urlTitleTrimmingCharacterSet;

@end
