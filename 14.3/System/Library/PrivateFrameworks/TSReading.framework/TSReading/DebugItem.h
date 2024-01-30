@class NSString;

@interface DebugItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (void)dealloc;
- (id)initWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;

@end
