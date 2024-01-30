@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWURLSessionRequestBodyData : NSObject <NWURLSessionRequestBodyProvider> {
    NSObject<OS_dispatch_data> *_data;
    unsigned long long _length;
    unsigned long long _offset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)readMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
