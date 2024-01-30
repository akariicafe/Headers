@class NSString, _EXSceneSessionParameters, _EXPromise;

@interface _EXSceneConfiguration : NSObject <NSCopying>

@property (readonly) _EXSceneSessionParameters *parameters;
@property (copy) NSString *sceneDelegateClassName;
@property (readonly) _EXPromise *initializationPromise;
@property (retain, nonatomic) Class sceneClass;
@property (retain, nonatomic) Class sceneDelegateClass;
@property (readonly, copy) NSString *role;

- (id)initWithParameters:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initializationPromise;
- (id)initializationParametersOfClass:(Class)a0 error:(id *)a1;
- (id)role;
- (void).cxx_destruct;

@end
