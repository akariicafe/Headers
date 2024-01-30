@class ATXSlotResolution;
@protocol ATXPredictionContextBuilderProtocol;

@interface ATXActionResolution : NSObject {
    ATXSlotResolution *_slotResolver;
    id<ATXPredictionContextBuilderProtocol> _predictionContextBuilder;
}

- (id)init;
- (void).cxx_destruct;
- (id)statisticsForActionKey:(id)a0;
- (id)initWithSlotResolver:(id)a0 predictionContextBuilder:(id)a1;
- (id)statisticsForActionKey:(id)a0 context:(id)a1;
- (id)actionPredictionsForActionKey:(id)a0 statistics:(id)a1 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a2 appActionLogProbability:(double)a3 scoreLogger:(id)a4 andLimit:(int)a5 forMagicalMoments:(BOOL)a6 currentDate:(id)a7;
- (id)actionPredictionsForActionKey:(id)a0 statistics:(id)a1 appActionPredictionItem:(const struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a2 appActionLogProbability:(double)a3 scoreLogger:(id)a4 andLimit:(int)a5 forMagicalMoments:(BOOL)a6 predictionItemsToKeep:(struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { } *)a7 currentDate:(id)a8;

@end
