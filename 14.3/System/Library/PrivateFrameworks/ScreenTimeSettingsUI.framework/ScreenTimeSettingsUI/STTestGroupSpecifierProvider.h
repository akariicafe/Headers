@class NSTimer;

@interface STTestGroupSpecifierProvider : STUsageGroupSpecifierProvider {
    BOOL _isHidden;
}

@property (retain, nonatomic) NSTimer *timer;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timerFired:(id)a0;
- (void)setIsHidden:(BOOL)a0;
- (BOOL)isHidden;

@end
