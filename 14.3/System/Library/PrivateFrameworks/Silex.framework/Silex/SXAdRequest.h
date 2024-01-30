@class NSString, NSDictionary;

@interface SXAdRequest : NSObject

@property (retain, nonatomic) NSString *componentIdentifier;
@property (retain, nonatomic) NSDictionary *componentMetadata;
@property (nonatomic) struct CGPoint { double x; double y; } positionInArticle;
@property (nonatomic) unsigned long long adType;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSDictionary *campaignData;
@property (nonatomic) BOOL dynamicPlacement;
@property (nonatomic) double aspectRatioOfVideoPlayer;

- (void).cxx_destruct;

@end
