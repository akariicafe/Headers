@class NSArray, NEPolicyResult;

@interface NEPolicy : NSObject <NEPrettyDescription>

@property unsigned int order;
@property (retain) NEPolicyResult *result;
@property (copy) NSArray *conditions;

- (id)initWithOrder:(unsigned int)a0 result:(id)a1 conditions:(id)a2;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)validate;
- (id)description;
- (BOOL)addTLVsToMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
