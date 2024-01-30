@class NSMutableDictionary, NSMutableArray;

@interface _HDOntologyGraphInflationCache : NSObject {
    NSMutableDictionary *_conceptsByID;
    NSMutableArray *_conceptIDStack;
}

- (id)init;
- (void).cxx_destruct;

@end
