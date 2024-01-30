@class NSString;

@interface _WKUserInitiatedAction : NSObject <WKObject> {
    struct ObjectStorage<API::UserInitiatedAction> { struct type { unsigned char __lx[24]; } data; } _userInitiatedAction;
}

@property (readonly, nonatomic, getter=isConsumed) BOOL consumed;
@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
