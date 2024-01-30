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
- (id)initWithDelegate:(id)a0;
- (void)push:(float)a0;
- (void).cxx_destruct;
- (void)updateProgress:(float)a0;
- (id)archiveToDictionary;
- (void)popAndUpdate;
- (void)setCurrentMediaPath:(id)a0;
- (float)totalProgress:(float)a0;

@end
