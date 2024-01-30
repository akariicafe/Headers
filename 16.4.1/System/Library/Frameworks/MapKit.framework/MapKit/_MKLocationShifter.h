@class GEOLocationShifter;

@interface _MKLocationShifter : NSObject {
    GEOLocationShifter *_locationShifter;
}

@property (readonly, nonatomic, getter=isLocationShiftEnabled) BOOL locationShiftEnabled;

+ (BOOL)isLocationShiftRequiredForLocation:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_prepareShiftForLocation:(id)a0 withCompletionHandler:(id /* block */)a1 withShiftRequestBlock:(id /* block */)a2;
- (void)shiftLocation:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)shiftLocation:(id)a0 withCompletionHandler:(id /* block */)a1 callbackQueue:(id)a2;

@end
