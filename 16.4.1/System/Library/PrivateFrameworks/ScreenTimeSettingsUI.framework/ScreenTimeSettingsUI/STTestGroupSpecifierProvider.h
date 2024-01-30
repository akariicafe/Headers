@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    BOOL _isHidden;
}

@property (retain, nonatomic) NSTimer *timer;

- (void)timerFired:(id)a0;
- (void)setIsHidden:(BOOL)a0;
- (BOOL)isHidden;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
