@class UIColor, NSString, NSURL, NSDate;
@protocol SKUIArtworkProviding;

@interface SKUICountdown : NSObject {
    BOOL _isLoaded;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) unsigned long long dateFormat;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) long long initialValue;
@property (nonatomic) long long finalValue;
@property (nonatomic) long long rate;
@property (copy, nonatomic) NSString *numberFormat;
@property (copy, nonatomic) UIColor *fontColor;
@property (copy, nonatomic) UIColor *flapTopColor;
@property (copy, nonatomic) UIColor *flapBottomColor;
@property (nonatomic, getter=isFlapped) BOOL flapped;
@property (retain, nonatomic) id<SKUIArtworkProviding> artworkProvider;
@property (retain, nonatomic) id<SKUIArtworkProviding> endArtworkProvider;

- (void)updateWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLoaded;
- (id)initWithCountdownDictionary:(id)a0;

@end
