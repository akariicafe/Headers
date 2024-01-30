@class NSString;

@interface NWURLSessionRequestBodyStream : NSObject <NWURLSessionRequestBodyProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)readMinimumLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
