@class HKDisplayCategory, NSMutableArray;

@interface WDStoredDataCategory : NSObject

@property (retain) HKDisplayCategory *category;
@property (readonly, nonatomic) NSMutableArray *displayTypes;

- (void).cxx_destruct;

@end
