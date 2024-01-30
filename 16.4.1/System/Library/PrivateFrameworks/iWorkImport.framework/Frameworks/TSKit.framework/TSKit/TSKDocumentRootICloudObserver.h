@interface TSKDocumentRootICloudObserver : NSObject {
    long long _identifier;
    id /* block */ _block;
}

@property (readonly, nonatomic) long long identifer;
@property (readonly, nonatomic) BOOL suspendedCollaboration;

- (void).cxx_destruct;
- (id)initWithSuspendedCollaboration:(BOOL)a0 block:(id /* block */)a1;
- (void)invokeWithDocumentRoot:(id)a0 reason:(unsigned long long)a1;

@end
