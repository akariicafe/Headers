@class NSString, UIColor;

@interface SUSubtitledButtonContent : NSObject

@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIColor *subtitleShadowColor;

- (void)dealloc;

@end
