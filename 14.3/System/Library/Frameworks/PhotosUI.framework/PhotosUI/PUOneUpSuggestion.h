@class NSString, AVAsset, UIImage, AVVideoComposition;

@interface PUOneUpSuggestion : NSObject

@property (nonatomic) long long preferredPresentationStyle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) UIImage *titleIcon;
@property (retain, nonatomic) NSString *localizedMessage;
@property (retain, nonatomic) NSString *localizedDismissButtonTitle;
@property (retain, nonatomic) AVAsset *loopingVideoAsset;
@property (retain, nonatomic) AVVideoComposition *loopingVideoComposition;
@property (copy, nonatomic) id /* block */ markAsSeenHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (id)description;

@end
