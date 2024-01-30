@interface SUSUIFakeSUAutoInstallForecast : SUAutoInstallForecast {
    double _now;
}

- (double)_now;
- (long long)scheduleType;
- (id)suEndDate;
- (id)suStartDate;
- (id)unlockStartDate;
- (id)unlockEndDate;
- (id)firstUnlock;

@end
