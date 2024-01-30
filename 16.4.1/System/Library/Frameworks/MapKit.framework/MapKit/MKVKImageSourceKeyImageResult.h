@class NSArray, MKVKImageSourceCalculationParameters, NSMutableSet, NSMutableArray;

@interface MKVKImageSourceKeyImageResult : NSObject {
    NSMutableArray *_mutableFullBleedColors;
}

@property (retain, nonatomic) NSMutableArray *triedKeys;
@property (retain, nonatomic) NSMutableArray *mutableImages;
@property (retain, nonatomic) NSMutableSet *imageDatas;
@property (readonly, nonatomic) MKVKImageSourceCalculationParameters *parameters;
@property (readonly, nonatomic) NSArray *fullBleedColors;
@property (readonly, nonatomic, getter=hasSameFullBleedColors) BOOL sameFullBleedColors;
@property (readonly, nonatomic) NSArray *images;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)addFullBleedColor:(id)a0;

@end
