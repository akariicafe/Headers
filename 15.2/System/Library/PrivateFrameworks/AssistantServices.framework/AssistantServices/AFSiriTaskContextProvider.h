@class NSString, AFSiriTaskmaster;

@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding> {
    AFSiriTaskmaster *_taskmaster;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)getAppContextWithDeliveryHandler:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)initWithTaskmaster:(id)a0;

@end
