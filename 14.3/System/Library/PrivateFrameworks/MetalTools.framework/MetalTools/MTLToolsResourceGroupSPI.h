@class NSString;

@interface MTLToolsResourceGroupSPI : MTLToolsObject <MTLResourceGroupSPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsResource:(id)a0;

@end
