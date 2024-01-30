@class SAUIAppPunchOut, SAMPPlaybackButton, SAAISongTag;

@interface SAAISongTagSnippet : SAUISnippet

@property (retain, nonatomic) SAUIAppPunchOut *attributionPunchOut;
@property (retain, nonatomic) SAMPPlaybackButton *playbackButton;
@property (retain, nonatomic) SAUIAppPunchOut *purchaseSongPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut *songDetailsPunchOut;
@property (retain, nonatomic) SAAISongTag *songTag;

+ (id)songTagSnippet;
+ (id)songTagSnippetWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
