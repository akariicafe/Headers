@class NSString, DESpeakableString;

@interface DEDialog : DENode

@property struct shared_ptr<siri::dialogengine::Dialog> { struct Dialog *__ptr_; struct __shared_weak_count *__cntrl_; } This;
@property (retain) NSString *id;
@property DESpeakableString *content;
@property DESpeakableString *caption;

- (id).cxx_construct;
- (BOOL)validate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)getExpandedCaption:(id)a0;
- (id)getExpandedContent:(id)a0;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Dialog> { struct Dialog *x0; struct __shared_weak_count *x1; })a0;
- (BOOL)isSelectable:(id)a0;

@end
