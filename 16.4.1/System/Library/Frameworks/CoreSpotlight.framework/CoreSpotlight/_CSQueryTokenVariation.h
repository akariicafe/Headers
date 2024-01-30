@class NSString;

@interface _CSQueryTokenVariation : NSObject

@property (readonly, copy, nonatomic) NSString *variation;
@property (nonatomic) float confidence;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithVariation:(id)a0 type:(long long)a1 confidence:(float)a2;

@end
