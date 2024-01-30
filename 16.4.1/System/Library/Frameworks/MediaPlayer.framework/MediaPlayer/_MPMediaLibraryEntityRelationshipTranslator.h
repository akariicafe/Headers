@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject

@property (nonatomic) Class relationshipModelClass;
@property (nonatomic) BOOL transient;
@property (nonatomic) void *foreignPropertyBase;
@property (nonatomic) struct shared_ptr<std::unordered_map<std::string, mlcore::ModelPropertyBase *>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } relationshipValidationProperties;
@property (copy, nonatomic) id /* block */ validRelationshipHandler;
@property (readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;

- (id).cxx_construct;
- (void).cxx_destruct;

@end
