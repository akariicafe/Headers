@class NSString, NSMutableArray;

@interface PLProgressStack : NSObject

@property (weak, nonatomic) id delegate;
@property (nonatomic) float currentMultiplier;
@property (retain, nonatomic) NSMutableArray *multipliers;
@property (nonatomic) float currentTotal;
@property (nonatomic) BOOL notifyUsingAssetsdNotificationCenter;
@property (retain, nonatomic) NSString *mediaPathString;

+ (id)unarchiveFromDictionary:(id)a0;

- (void)pop;
- (void)updateProgress:(float)a0;
- (id)initWithDelegate:(id)a0;
- (void)popAndUpdate;
- (float)totalProgress:(float)a0;
- (void)setCurrentMediaPath:(id)a0;
- (id)archiveToDictionary;
- (void).cxx_destruct;
- (void)push:(float)a0;

@end
