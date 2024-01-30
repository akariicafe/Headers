@class NSDictionary;

@interface NPNameComponentsData : NSObject {
    NSDictionary *_nameComponents;
}

- (void).cxx_destruct;
- (id)init;
- (id)_keyForDataEntry:(unsigned long long)a0;
- (id)objectValueForEntry:(unsigned long long)a0;
- (BOOL)collectionForEntry:(unsigned long long)a0 contains:(id)a1;

@end
