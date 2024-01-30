@interface MCNearbyKey : NSObject

@property (readonly, nonatomic) unsigned short character;
@property (readonly, nonatomic) float logLikelihood;

- (id)initWithCharacter:(unsigned short)a0 logLikelihood:(float)a1;

@end
