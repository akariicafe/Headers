@class NSString, NSArray, LPCaptionBarPresentationProperties, LPVideo, LPARAsset, LPImagePresentationProperties, NSURL, LPInlineMediaPlaybackInformation, LPImage, LPAudio, NSNumber, UIColor;

@interface LPWebLinkPresentationProperties : NSObject <LPLinkPresentationPropertyProvider>

@property (nonatomic, getter=isPreliminary) BOOL preliminary;
@property (nonatomic) long long style;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *captionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaTopCaptionBar;
@property (retain, nonatomic) LPCaptionBarPresentationProperties *mediaBottomCaptionBar;
@property (copy, nonatomic) NSString *quotedText;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImagePresentationProperties *imageProperties;
@property (retain, nonatomic) NSArray *alternateImages;
@property (retain, nonatomic) LPVideo *video;
@property (retain, nonatomic) LPAudio *audio;
@property (retain, nonatomic) LPARAsset *arAsset;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) LPImage *backgroundImage;
@property (retain, nonatomic) LPImagePresentationProperties *backgroundImageProperties;
@property (retain, nonatomic) NSNumber *minimumHeight;
@property (retain, nonatomic) LPInlineMediaPlaybackInformation *inlinePlaybackInformation;
@property (copy, nonatomic) NSString *domainNameForIndicator;
@property (copy, nonatomic) NSURL *overrideURL;
@property (copy, nonatomic) NSNumber *overrideAllowOpeningSensitiveURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
