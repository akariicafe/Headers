@class NSMapTable, SBHIconModel;

@interface SBIconPreviousLocationTracker : NSObject {
    NSMapTable *_previousIconLocations;
}

@property (retain, nonatomic) SBHIconModel *iconModel;

- (void).cxx_destruct;
- (void)captureLocationInfoForIcon:(id)a0 inModel:(id)a1;
- (id)previousLocationInfoForIcon:(id)a0;

@end
