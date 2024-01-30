@class NSString;

@interface ResourceWrapper : NSObject <NodeWrapper> {
    void *_node;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)wrapperWithResource:(void *)a0;

@end
