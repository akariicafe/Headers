@class NSString, UIColor;

@interface MediaControlsExpandableButtonOption : NSObject

@property (retain, nonatomic) id identifier;
@property (retain, nonatomic) NSString *packageName;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *selectedBackgroundColor;
@property (retain, nonatomic) NSString *selectedState;
@property (nonatomic) BOOL animateWhileSelected;

- (id)description;
- (void).cxx_destruct;

@end
