@class NSString, NSNumber;

@interface TVPMediaItemProductPlacementInfo : NSObject

@property (retain, nonatomic) NSString *localizedInfoString;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSString *imageUrlStringFormat;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocalizedProductPlacementInfoString:(id)a0 duration:(id)a1 andImageURLStringFormat:(id)a2;

@end
