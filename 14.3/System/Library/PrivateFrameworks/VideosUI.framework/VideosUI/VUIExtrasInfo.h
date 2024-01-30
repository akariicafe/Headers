@class NSString, NSDictionary, NSURL, NSNumber;

@interface VUIExtrasInfo : NSObject {
    NSDictionary *_extrasDict;
}

@property (readonly, nonatomic) NSNumber *contentRating;
@property (readonly, nonatomic) NSString *adamID;
@property (readonly, nonatomic) NSString *extrasURLString;
@property (readonly, nonatomic) NSString *previewURLString;
@property (retain, nonatomic) NSString *actionParams;
@property (readonly, nonatomic) NSString *loadingImage;
@property (readonly, nonatomic) BOOL isLightTheme;
@property (readonly, nonatomic) NSURL *tvAppDeeplinkURL;
@property (readonly, nonatomic) BOOL isEntitledToPlay;

- (void).cxx_destruct;
- (id)initWithMediaItem:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
