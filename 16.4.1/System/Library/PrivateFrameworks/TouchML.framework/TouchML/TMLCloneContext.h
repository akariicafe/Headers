@class NSString, JSContext, TMLMetaObject, TMLMetaContext, JSValue;

@interface TMLCloneContext : NSObject

@property (readonly, nonatomic) TMLMetaContext *metaContext;
@property (nonatomic) JSContext *jsContext;
@property (nonatomic) JSValue *apiObject;
@property (copy, nonatomic) NSString *apiObjectKey;
@property (readonly, nonatomic) TMLMetaObject *rootObject;

- (void).cxx_destruct;
- (id)initWithMetaContext:(id)a0;

@end
