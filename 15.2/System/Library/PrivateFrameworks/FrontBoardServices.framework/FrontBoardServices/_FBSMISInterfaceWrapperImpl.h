@class NSString;

@interface _FBSMISInterfaceWrapperImpl : NSObject <_FBSMISInterfaceWrapper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)validateSignatureForPath:(id)a0 options:(id)a1 userInfo:(out id *)a2;
- (int)signatureVersion:(id)a0 version:(out unsigned int *)a1;

@end
