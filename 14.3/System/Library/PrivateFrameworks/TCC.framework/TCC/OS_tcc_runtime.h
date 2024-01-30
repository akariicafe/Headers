@class NSString;

@interface OS_tcc_runtime : OS_tcc_object <OS_tcc_runtime>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
