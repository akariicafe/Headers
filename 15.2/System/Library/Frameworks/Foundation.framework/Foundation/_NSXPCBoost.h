@class NSObject;
@protocol OS_xpc_object;

@interface _NSXPCBoost : NSObject {
    NSObject<OS_xpc_object> *_event;
}

- (void)dealloc;

@end
