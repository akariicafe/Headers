@class NSString;

@interface WKNSData : NSData <WKObject> {
    struct ObjectStorage<API::Data> { struct type { unsigned char __lx[48]; } data; } _data;
}

@property (readonly) struct Object { void /* function */ **x0; void *x1; } *_apiObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
