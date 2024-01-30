@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) id<CPLAbstractObject> abstractObject;

- (id)initWithAbstractObject:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
