@class TSWPDrawableAttachment;

@interface TSWPCharIndexPlacementIndex : NSObject

@property (nonatomic) unsigned long long charIndex;
@property (nonatomic) int placementIndex;
@property (retain, nonatomic) TSWPDrawableAttachment *drawableAttachment;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithCharIndex:(unsigned long long)a0 placmentIndex:(int)a1 drawableAttachment:(id)a2;

@end
