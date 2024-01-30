@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject

@property (retain, nonatomic) RTStateModelOneState *oneState;
@property (retain, nonatomic) RTStateModelEntryExit *entryExit;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithOneState:(id)a0 entryExit:(id)a1;

@end
