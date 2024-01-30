@class NSMutableDictionary;

@interface HKMedicationsNumberToStringMap : NSObject {
    NSMutableDictionary *_storage;
}

- (void)setString:(id)a0 forKey:(long long)a1;
- (id)stringForKey:(long long)a0;
- (long long)count;
- (id)init;
- (void).cxx_destruct;

@end
