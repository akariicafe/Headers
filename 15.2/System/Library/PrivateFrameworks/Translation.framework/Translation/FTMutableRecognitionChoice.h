@class NSArray;

@interface FTMutableRecognitionChoice : FTRecognitionChoice

@property (copy, nonatomic) NSArray *alternative_index;
@property (nonatomic) int confidence;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
