@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface BSDispatchSource : NSObject <BSInvalidatable> {
    struct dispatch_source_type_s { } *_type;
    NSObject<OS_dispatch_source> *_source;
    int _activated;
    int _invalidated;
    id /* block */ _eventHandler;
    id /* block */ _cancelHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;

@end
