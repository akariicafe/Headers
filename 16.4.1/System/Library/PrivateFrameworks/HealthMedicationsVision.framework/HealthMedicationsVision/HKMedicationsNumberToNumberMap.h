@class NSMutableDictionary;

@interface HKMedicationsNumberToNumberMap : NSObject {
    NSMutableDictionary *_storage;
}

- (void)setInteger:(long long)a0 forKey:(long long)a1;
- (long long)integerForKey:(long long)a0;
- (id)init;
- (void).cxx_destruct;

@end
