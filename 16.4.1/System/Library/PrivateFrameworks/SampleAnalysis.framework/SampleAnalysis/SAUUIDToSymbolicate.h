@class NSMutableArray;

@interface SAUUIDToSymbolicate : NSObject {
    int _livePid;
    NSMutableArray *_binaries;
    unsigned long long _dataGatheringOptions;
}

- (id)debugDescription;
- (void).cxx_destruct;

@end
