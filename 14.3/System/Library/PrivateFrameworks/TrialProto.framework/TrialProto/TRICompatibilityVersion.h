@class TRIFactorLevels;

@interface TRICompatibilityVersion : TRIPBMessage

@property (nonatomic) unsigned int id_p;
@property (nonatomic) BOOL hasId_p;
@property (retain, nonatomic) TRIFactorLevels *defaultFactorLevels;
@property (nonatomic) BOOL hasDefaultFactorLevels;
@property (retain, nonatomic) TRIFactorLevels *control;
@property (nonatomic) BOOL hasControl;

+ (id)descriptor;

@end
