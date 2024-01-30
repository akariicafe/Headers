@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject

@property (readonly, nonatomic) long long keyID;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, nonatomic) long long valueType;
@property (readonly, nonatomic) long long nodeID;
@property (readonly, weak, nonatomic) HDSimpleGraphNode *node;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRowID:(long long)a0;
- (id)initWithRowID:(long long)a0 keyID:(long long)a1 key:(id)a2 value:(id)a3 valueType:(long long)a4 nodeID:(long long)a5 node:(id)a6;

@end
