@class NSString, NSURL;

@interface _GDViewAccessAssertion : NSObject <GDViewAccessAssertion> {
    long long _handle;
}

@property (readonly, nonatomic) NSString *viewName;
@property (readonly, nonatomic) NSURL *viewArtifactURL;
@property (readonly, nonatomic) NSString *viewArtifactTableName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithViewName:(id)a0 extensionToken:(id)a1 error:(id *)a2;

@end
