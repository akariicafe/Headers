@class NSDictionary;

@interface PLGreenController : NSObject

@property (readonly, nonatomic) NSDictionary *currentGreenValues;

- (void)readValuesFromDisk;
- (BOOL)isGreenStateValid;
- (BOOL)greenValuesSimilarToGreenValues:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
