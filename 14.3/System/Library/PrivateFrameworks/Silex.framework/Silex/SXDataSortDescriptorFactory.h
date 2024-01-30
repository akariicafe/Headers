@class NSString;

@interface SXDataSortDescriptorFactory : NSObject <SXDataSortDescriptorFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)sortDescriptorForDataDescriptor:(id)a0 ascending:(BOOL)a1;

@end
