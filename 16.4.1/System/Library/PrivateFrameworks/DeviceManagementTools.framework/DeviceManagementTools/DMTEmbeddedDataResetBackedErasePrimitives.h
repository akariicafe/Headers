@class NSString;

@interface DMTEmbeddedDataResetBackedErasePrimitives : NSObject <DMTErasePrimitives>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performEraseWithCompletion:(id /* block */)a0;

@end
