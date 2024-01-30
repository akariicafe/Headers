@class NSString;

@interface PUModelTileTransform : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL hasUserInput;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } normalizedTranslation;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } overscroll;
@property (readonly, copy, nonatomic) NSString *userInputOriginIdentifier;
@property (readonly, nonatomic) BOOL hasUserZoomedOut;
@property (readonly, nonatomic) BOOL hasUserZoomedIn;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithNoUserInput;
- (BOOL)isEqual:(id)a0;
- (id)initWithNormalizedTranslation:(struct CGPoint { double x0; double x1; })a0 overscroll:(struct CGPoint { double x0; double x1; })a1 scale:(double)a2 userInputOriginIdentifier:(id)a3;

@end
