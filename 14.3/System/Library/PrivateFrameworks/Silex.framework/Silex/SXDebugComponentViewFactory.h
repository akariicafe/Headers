@class NSString;

@interface SXDebugComponentViewFactory : SXResolverComponentViewFactory <SXComponentViewFactory>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) int role;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)componentViewClass;

@end
