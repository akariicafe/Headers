@class AXMOutputActionHandle;

@interface AXMOutputAction : NSObject {
    AXMOutputActionHandle *_handle;
}

@property (readonly, nonatomic) AXMOutputActionHandle *handle;

- (void).cxx_destruct;
- (id)_initWithHandle:(id)a0;

@end
