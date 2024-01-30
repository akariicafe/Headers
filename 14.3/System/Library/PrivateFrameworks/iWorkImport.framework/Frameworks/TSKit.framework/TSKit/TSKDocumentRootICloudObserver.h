@interface TSKDocumentRootICloudObserver : NSObject {
    long long _identifier;
    id /* block */ _block;
}

@property (readonly, nonatomic) long long identifer;
@property (readonly, nonatomic) BOOL suspendedCollaboration;

- (void).cxx_destruct;
- (void)invokeWithDocumentRoot:(id)a0;
- (id)initWithSuspendedCollaboration:(BOOL)a0 block:(id /* block */)a1;

@end
