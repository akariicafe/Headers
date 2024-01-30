@class NSData, NSString, NSURL;

@interface MLTrackImportChapter : NSObject <NSCopying>

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSString *imageCacheKey;
@property (nonatomic) unsigned long long startTimeInMilliseconds;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *URLTitle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualIgnoringTimesAndTitle:(id)a0;
- (void)normalizeProperties;

@end
