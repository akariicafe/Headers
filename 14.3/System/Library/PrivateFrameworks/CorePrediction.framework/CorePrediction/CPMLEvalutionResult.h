@class NSObject;

@interface CPMLEvalutionResult : NSObject {
    NSObject *object;
    unsigned long long count;
}

- (void).cxx_destruct;
- (int)getInt;
- (id)getList;
- (double)getDouble;
- (id)getString;
- (id)init:(id)a0 withConfigurationList:(id)a1;
- (id)getStringList;
- (id)getListDict;

@end
