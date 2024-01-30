@class NSString;

@interface ISCompositorResourceProviderKey : NSObject <ISCompositorResource>

@property (retain) NSString *name;
@property unsigned long long flags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resourceKeyWithName:(id)a0 flags:(unsigned long long)a1;

- (void).cxx_destruct;

@end
