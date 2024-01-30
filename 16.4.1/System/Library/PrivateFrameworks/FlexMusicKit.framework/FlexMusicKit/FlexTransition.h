@class NSString;

@interface FlexTransition : NSObject <NSCopying, NSDictionaryCoding>

@property (readonly, nonatomic) BOOL prevented;
@property (readonly, nonatomic) long long fadeOut;
@property (readonly, nonatomic) long long fadeIn;
@property (readonly, copy, nonatomic) NSString *transitionSegmentName;
@property (readonly, nonatomic) BOOL useNextSegmentForFadeOut;

+ (long long)validFadeLengthForLength:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)encodeAsDictionary;
- (id)initWithTransitionSegmentNamed:(id)a0 prevented:(BOOL)a1 fadeOut:(long long)a2 fadeIn:(long long)a3 useNextSegmentForFadeOut:(BOOL)a4;
- (BOOL)isDefaultTransition;

@end
