@class NSString, NSURL, UIImage, NSData;

@interface IMPlayerChapterInfo : NSObject {
    UIImage *_artwork;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *externalURL;
@property (readonly, nonatomic) UIImage *artwork;
@property (retain, nonatomic) NSData *artworkData;
@property (nonatomic) double duration;
@property (nonatomic) double time;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } mediaTimeRange;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } assetTimeRange;
@property (nonatomic) int type;
@property (nonatomic) int metadataType;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
