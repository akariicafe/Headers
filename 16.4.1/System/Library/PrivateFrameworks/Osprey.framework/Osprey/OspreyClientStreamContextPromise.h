@class NSString, OspreyDeferredObject;

@interface OspreyClientStreamContextPromise : NSObject <OspreyClientStreamingContext> {
    OspreyDeferredObject *_deferredContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finishWriting;
- (void).cxx_destruct;
- (void)fulfill:(id)a0;
- (id)initWithFulfillmentQueue:(id)a0;
- (void)writeFrame:(id)a0;
- (void)writeFrame:(id)a0 compressed:(BOOL)a1;

@end
