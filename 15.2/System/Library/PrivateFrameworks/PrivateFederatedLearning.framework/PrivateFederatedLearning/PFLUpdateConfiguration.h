@class NSString, NSArray, MLModelConfiguration;

@interface PFLUpdateConfiguration : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSArray *layerNames;
@property (readonly, nonatomic) double normMax;
@property (readonly, nonatomic) unsigned long long normBinCount;
@property (readonly, nonatomic) MLModelConfiguration *modelConfiguration;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 layerNames:(id)a1 normMax:(double)a2 normBinCount:(unsigned long long)a3 modelConfiguration:(id)a4;

@end
