@class NSString;

@interface DEFile : NSObject

@property struct shared_ptr<siri::dialogengine::File> { struct File *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *paramsFilename;
@property (retain) NSString *id;
@property (retain) NSString *localeFilename;

- (id)execute:(id)a0;
- (id)getRoot;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::File> { struct File *x0; struct __shared_weak_count *x1; })a0;
- (struct shared_ptr<siri::dialogengine::File> { struct File *x0; struct __shared_weak_count *x1; })getSharedPtr;
- (id)getFormatVersion;
- (id)getParameters;
- (id)getDialogs;
- (void)addPhrase:(id)a0;
- (id)getValidationErrors;
- (id)getValidationWarnings;

@end
