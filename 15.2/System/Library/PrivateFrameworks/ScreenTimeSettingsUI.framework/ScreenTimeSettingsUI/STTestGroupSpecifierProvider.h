@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    BOOL _isHidden;
}

@property (retain, nonatomic) NSTimer *timer;

- (void)setIsHidden:(BOOL)a0;
- (void)timerFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isHidden;

@end
