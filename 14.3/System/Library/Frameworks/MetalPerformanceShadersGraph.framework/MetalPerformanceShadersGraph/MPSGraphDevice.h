@protocol MTLDevice;

@interface MPSGraphDevice : NSObject {
    id<MTLDevice> _mtlDevice;
    unsigned int _type;
}

@property (readonly, nonatomic) unsigned int type;
@property (readonly, nonatomic) id<MTLDevice> metalDevice;

+ (void)load;
+ (id)deviceWithMTLDevice:(id)a0;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
