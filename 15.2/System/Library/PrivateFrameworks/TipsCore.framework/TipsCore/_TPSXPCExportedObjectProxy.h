@interface _TPSXPCExportedObjectProxy : NSObject

@property (weak, nonatomic) id weakExportedObject;
@property (retain, nonatomic) Class weakExportedObjectClass;

- (id)methodSignatureForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)a0;

@end
