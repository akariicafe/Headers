@interface CSMyriadPHashFactors : NSObject

@property (readonly, nonatomic) unsigned short hashValue;
@property (readonly, nonatomic) unsigned char goodness;
@property (readonly, nonatomic) unsigned char confidence;
@property (readonly, nonatomic) unsigned long long absTime;
@property (readonly, nonatomic) unsigned char frac;

- (id)initWithHash:(unsigned short)a0 goodness:(unsigned char)a1 confidence:(unsigned char)a2 absTime:(unsigned long long)a3 frac:(unsigned char)a4;

@end
