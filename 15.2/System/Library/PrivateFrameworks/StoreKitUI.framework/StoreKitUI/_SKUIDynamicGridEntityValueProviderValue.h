@protocol IKEntityValueProviding;

@interface _SKUIDynamicGridEntityValueProviderValue : NSObject

@property (retain, nonatomic) id<IKEntityValueProviding> entityValueProvider;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;

@end
