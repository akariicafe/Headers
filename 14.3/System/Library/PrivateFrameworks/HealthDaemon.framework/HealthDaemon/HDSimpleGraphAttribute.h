@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject {
    long long _nodeID;
    HDSimpleGraphNode *_node;
}

@property (readonly, nonatomic) long long keyID;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *value;
@property (readonly, copy, nonatomic) NSString *valueType;
@property (readonly, weak, nonatomic) HDSimpleGraphNode *node;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDatabase:(id)a0 rowID:(long long)a1 keyID:(long long)a2 key:(id)a3 value:(id)a4 valueType:(id)a5 nodeID:(long long)a6 node:(id)a7;

@end
