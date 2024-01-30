@class NSString, OspreyDeferredObject;

@interface OspreyClientStreamContextPromise : NSObject <OspreyClientStreamingContext> {
    OspreyDeferredObject *_deferredContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)fulfill:(id)a0;
- (void)writeFrame:(id)a0;
- (void)finishWriting;
- (void)writeFrame:(id)a0 compressed:(BOOL)a1;
- (id)initWithFulfillmentQueue:(id)a0;

@end
