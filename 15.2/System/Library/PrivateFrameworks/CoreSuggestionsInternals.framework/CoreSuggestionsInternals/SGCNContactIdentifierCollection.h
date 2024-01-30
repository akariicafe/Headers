@class NSMutableData, NSMutableArray;

@interface SGCNContactIdentifierCollection : NSObject {
    NSMutableData *_optimizedBuffer;
    NSMutableArray *_unoptimizedIdentifiers;
}

- (id)proxyArray;
- (void).cxx_destruct;
- (id)init;
- (void)addCNContactIdentifier:(id)a0;
- (BOOL)_optimizeAndAddCNContactIdentifier:(id)a0;

@end
