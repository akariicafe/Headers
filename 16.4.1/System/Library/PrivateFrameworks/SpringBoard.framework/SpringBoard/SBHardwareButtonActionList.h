@class NSMutableArray;

@interface SBHardwareButtonActionList : NSObject {
    long long _performQueueNestCount;
}

@property (retain, nonatomic) NSMutableArray *actionBlocks;
@property (nonatomic, getter=isButtonDown) BOOL buttonDown;

- (void)scheduleButtonUpActionBlock:(id /* block */)a0;
- (void)performQueuedButtonUpActions;
- (void).cxx_destruct;

@end
