@class NSString;

@interface FPActionLocatorAccessToken : NSObject <FPActionLocatorAccess> {
    id /* block */ _stopBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenWithBlock:(id /* block */)a0;

- (void)dealloc;
- (void)stopAccessing;
- (void).cxx_destruct;

@end
