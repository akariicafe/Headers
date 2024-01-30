@class NSMapTable;

@interface PXRunNodeOperationMap : NSObject {
    NSMapTable *_operationMap;
}

- (void).cxx_destruct;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (id)operationForRunNode:(id)a0;

@end
