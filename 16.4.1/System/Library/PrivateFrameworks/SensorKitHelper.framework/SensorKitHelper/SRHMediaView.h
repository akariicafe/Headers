@class NSUUID, UIView;

@interface SRHMediaView : NSObject

@property (retain, nonatomic) UIView *view;
@property (nonatomic) BOOL onScreen;
@property (retain, nonatomic) NSUUID *uuid;

- (id)initWithView:(id)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isSizeAcceptable;
- (double)minimumVisibleArea;

@end
