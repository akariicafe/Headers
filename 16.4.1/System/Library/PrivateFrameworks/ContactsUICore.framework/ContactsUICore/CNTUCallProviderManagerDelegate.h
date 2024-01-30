@class NSString;

@interface CNTUCallProviderManagerDelegate : NSObject <TUCallProviderManagerDelegate>

@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)providersChangedForProviderManager:(id)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
