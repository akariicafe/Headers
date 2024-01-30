@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) id<CPLAbstractObject> abstractObject;

- (id)initWithAbstractObject:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
