@class NSMutableData, NSMutableArray;

@interface SGCNContactIdentifierCollection : NSObject {
    NSMutableData *_optimizedBuffer;
    NSMutableArray *_unoptimizedIdentifiers;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)_optimizeAndAddCNContactIdentifier:(id)a0;
- (void)addCNContactIdentifier:(id)a0;
- (id)proxyArray;

@end
