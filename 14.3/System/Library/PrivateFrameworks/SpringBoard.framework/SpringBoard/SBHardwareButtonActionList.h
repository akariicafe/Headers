@class NSMutableArray;

@interface SBHardwareButtonActionList : NSObject {
    long long _performQueueNestCount;
}

@property (retain, nonatomic) NSMutableArray *actionBlocks;
@property (nonatomic, getter=isButtonDown) BOOL buttonDown;

- (void).cxx_destruct;
- (void)scheduleButtonUpActionBlock:(id /* block */)a0;
- (void)performQueuedButtonUpActions;

@end
