@class NSString;

@interface UIMenuItem : NSObject

@property (nonatomic) BOOL dontDismiss;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) SEL action;

- (id)init;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 action:(SEL)a1;

@end
