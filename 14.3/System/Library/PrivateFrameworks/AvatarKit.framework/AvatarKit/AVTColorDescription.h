@class NSDictionary, NSMutableDictionary;

@interface AVTColorDescription : NSObject {
    NSMutableDictionary *_colors;
    NSMutableDictionary *_variationMin;
    NSMutableDictionary *_variationMax;
}

@property (readonly) NSDictionary *color;
@property (readonly) NSDictionary *variationsMin;
@property (readonly) NSDictionary *variationsMax;

- (id)initWithDescription:(id)a0;
- (void).cxx_destruct;
- (id)colors;

@end
