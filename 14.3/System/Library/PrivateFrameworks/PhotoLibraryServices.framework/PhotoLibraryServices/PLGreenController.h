@class NSDictionary;

@interface PLGreenController : NSObject

@property (readonly, nonatomic) NSDictionary *currentGreenValues;

- (id)init;
- (void).cxx_destruct;
- (void)readValuesFromDisk;
- (BOOL)isGreenStateValid;
- (BOOL)greenValuesSimilarToGreenValues:(id)a0;

@end
