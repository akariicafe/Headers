@class NSString;

@interface _WKUserContentWorld : NSObject <WKObject> {
    struct RetainPtr<WKContentWorld> { void *m_ptr; } _contentWorld;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalWorld;
+ (id)worldWithName:(id)a0;

- (id)_initWithName:(id)a0;
- (id).cxx_construct;
- (id)_init;
- (void).cxx_destruct;
- (id)_initWithContentWorld:(id)a0;

@end
