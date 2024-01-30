@class NSArray, NSDictionary, NSString, NSDate, NSObject;
@protocol OS_dispatch_queue, DBSmartWidgetSourceDelegate;

@interface DBSmartWidgetSource : NSObject

@property (class, readonly) NSArray *registeredSources;
@property (class, readonly, nonatomic) NSArray *predictionClasses;

@property (nonatomic) BOOL disabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSDate *lastRefresh;
@property (retain, nonatomic) NSDictionary *currentPredictions;
@property (readonly, nonatomic) NSString *sourceName;
@property (readonly, weak, nonatomic) id<DBSmartWidgetSourceDelegate> delegate;
@property (readonly, nonatomic) NSArray *predictions;

+ (id)sourceName;
+ (void)load;
+ (void)registerSource:(Class)a0;

- (void)handleEvent:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)refreshDisabled;
- (BOOL)defaultsDisabled;
- (id)freshPredictions;
- (id)initWithDelegate:(id)a0 resourceProvider:(id)a1;
- (void)refreshPredictions;
- (BOOL)shouldKeepPrediction:(id)a0;

@end
