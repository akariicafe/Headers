@class NSString, NSArray;

@interface DEObjectProperty : NSObject

@property struct shared_ptr<siri::dialogengine::ObjectProperty> { struct ObjectProperty *__ptr_; struct __shared_weak_count *__cntrl_; } ThisShared;
@property void *This;
@property (readonly) NSString *name;
@property (readonly) NSString *type;
@property (readonly) NSString *description;
@property (readonly) NSString *semanticConcept;
@property (readonly) NSArray *sampleValueLocales;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithSharedPtr:(void *)a0;
- (id)initWithPtr:(void *)a0;
- (id)sampleValuesForLocale:(id)a0;

@end
