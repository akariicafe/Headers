@class NSString;

@interface NUAdLayoutOptionsFactory : NSObject <NUAdLayoutOptionsFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLayoutOptionsWithContainerSize:(struct CGSize { double x0; double x1; })a0;

@end
