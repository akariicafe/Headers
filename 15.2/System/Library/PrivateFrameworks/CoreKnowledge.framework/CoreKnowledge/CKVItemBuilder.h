@class NSMutableArray, CKVMutableItem;

@interface CKVItemBuilder : NSObject {
    NSMutableArray *_fields;
    CKVMutableItem *_mutableItem;
}

- (void).cxx_destruct;
- (id)init;
- (id)buildBufferWithError:(id *)a0;
- (id)addFieldWithType:(long long)a0 value:(id)a1 error:(id *)a2;
- (id)initWithItemType:(long long)a0 itemId:(id)a1 error:(id *)a2;
- (id)addFieldWithType:(long long)a0 label:(id)a1 value:(id)a2 error:(id *)a3;

@end
