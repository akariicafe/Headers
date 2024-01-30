@interface PFQOSMeter : NSObject {
    _Atomic unsigned long long _counts[4];
    _Atomic unsigned long long _total;
}

- (BOOL)log:(long long)a0;
- (id)description;
- (id)init;
- (void)recordQOS;

@end
