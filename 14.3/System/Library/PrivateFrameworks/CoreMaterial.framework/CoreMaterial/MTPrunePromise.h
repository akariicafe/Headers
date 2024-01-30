@class MTMaterialLayer, NSDate;

@interface MTPrunePromise : NSObject {
    MTMaterialLayer *_materialLayer;
    NSDate *_timeStamp;
}

@property (nonatomic, getter=isPromiseFulfilled) BOOL promiseFulfilled;

- (id)initWithMaterialLayer:(id)a0;
- (void)fulfillPromise;
- (double)timeIntervalSincePromise;
- (void).cxx_destruct;
- (void)dealloc;

@end
