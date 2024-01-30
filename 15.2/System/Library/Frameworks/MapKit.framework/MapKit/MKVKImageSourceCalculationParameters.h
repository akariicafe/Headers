@class NSArray;

@interface MKVKImageSourceCalculationParameters : NSObject

@property (readonly, copy, nonatomic) NSArray *imageSourceKeys;
@property (readonly, nonatomic) double scale;

- (id)initWithImageSourceKeys:(id)a0 scale:(double)a1;
- (void).cxx_destruct;

@end
