@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject

@property (nonatomic) Class relationshipModelClass;
@property (nonatomic) BOOL transient;
@property (nonatomic) void *foreignPropertyBase;
@property (nonatomic) struct shared_ptr<std::map<std::string, mlcore::ModelPropertyBase *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } relationshipValidationProperties;
@property (copy, nonatomic) id /* block */ validRelationshipHandler;
@property (readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
