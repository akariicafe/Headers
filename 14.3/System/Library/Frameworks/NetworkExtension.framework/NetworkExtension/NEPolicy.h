@class NSArray, NEPolicyResult;

@interface NEPolicy : NSObject <NEPrettyDescription>

@property unsigned int order;
@property (retain) NEPolicyResult *result;
@property (copy) NSArray *conditions;

- (BOOL)addTLVsToMessage:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)validate;
- (id)initWithOrder:(unsigned int)a0 result:(id)a1 conditions:(id)a2;
- (id)description;

@end
