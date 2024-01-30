@interface PFQOSMeter : NSObject {
    _Atomic unsigned long long _counts[4];
    _Atomic unsigned long long _total;
}

- (id)init;
- (BOOL)log:(long long)a0;
- (id)description;
- (void)recordQOS;

@end
