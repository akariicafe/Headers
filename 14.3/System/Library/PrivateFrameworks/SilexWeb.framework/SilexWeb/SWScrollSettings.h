@interface SWScrollSettings : NSObject

@property (readonly, nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) BOOL scrollsToTop;
@property (readonly, nonatomic) BOOL showsVerticalScrollIndicator;

- (id)initWithScrollEnabled:(BOOL)a0 scrollsToTop:(BOOL)a1 showsVerticalScrollIndicator:(BOOL)a2;

@end
