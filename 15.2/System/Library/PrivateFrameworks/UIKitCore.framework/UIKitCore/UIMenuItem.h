@class NSString;

@interface UIMenuItem : NSObject

@property (nonatomic) BOOL dontDismiss;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) SEL action;

- (void).cxx_destruct;
- (id)init;
- (id)initWithTitle:(id)a0 action:(SEL)a1;

@end
