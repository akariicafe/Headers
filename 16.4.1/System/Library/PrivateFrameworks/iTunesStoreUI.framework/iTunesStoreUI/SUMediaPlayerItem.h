@class NSURL, NSString, NSArray;

@interface SUMediaPlayerItem : NSObject <NSCopying>

@property (retain, nonatomic) NSURL *backgroundImageURL;
@property (nonatomic) double bookmarkedStartTime;
@property (copy, nonatomic) NSString *bookmarkIdentifier;
@property (nonatomic) long long initialOrientation;
@property (nonatomic) unsigned long long itemIdentifier;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSArray *downloadPingURLs;
@property (copy, nonatomic) NSArray *playbackPingURLs;
@property (nonatomic) double playableDuration;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *URL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithItem:(id)a0;
- (id)_newPingURLsWithArray:(id)a0;
- (void)resetBookmarkedStartTime;

@end
