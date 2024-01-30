@class NUGLObjectPool;

@interface NUGLObject : NSObject

@property (readonly, nonatomic) BOOL exists;
@property (nonatomic) unsigned int identifier;
@property (retain, nonatomic) NUGLObjectPool *objectPool;

- (void)delete;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)generate:(id)a0;
- (void)ensure:(id)a0;
- (void)resetGLObject;

@end
