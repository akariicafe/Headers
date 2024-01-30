@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject

@property (retain, nonatomic) RTStateModelOneState *oneState;
@property (retain, nonatomic) RTStateModelEntryExit *entryExit;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithOneState:(id)a0 entryExit:(id)a1;

@end
