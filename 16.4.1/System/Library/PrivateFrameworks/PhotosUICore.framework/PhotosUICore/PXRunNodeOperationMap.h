@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}

- (id)objectForKeyedSubscript:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)operationForRunNode:(id)a0;

@end
