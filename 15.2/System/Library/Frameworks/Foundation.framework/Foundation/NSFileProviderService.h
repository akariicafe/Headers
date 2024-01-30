@class NSString, NSObject;
@protocol OS_dispatch_group;

@interface NSFileProviderService : NSObject {
    id _endpointCreatingProxy;
    NSObject<OS_dispatch_group> *_requestFinishedGroup;
}

@property (readonly, copy) NSString *name;

- (id)initWithName:(id)a0 endpointCreatingProxy:(id)a1 requestFinishedGroup:(id)a2;
- (void)getFileProviderConnectionWithCompletionHandler:(id /* block */)a0;
- (id)fetchFileProviderConnectionAndReturnError:(id *)a0;
- (void)dealloc;

@end
