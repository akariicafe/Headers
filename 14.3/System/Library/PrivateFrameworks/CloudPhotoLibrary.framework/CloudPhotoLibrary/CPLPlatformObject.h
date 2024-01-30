@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) id<CPLAbstractObject> abstractObject;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAbstractObject:(id)a0;

@end
