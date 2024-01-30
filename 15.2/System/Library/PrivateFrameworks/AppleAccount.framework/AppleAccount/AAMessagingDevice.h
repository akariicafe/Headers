@class NSString, IDSDevice;

@interface AAMessagingDevice : NSObject {
    IDSDevice *_device;
}

@property (readonly, nonatomic) NSString *productBuildVersion;
@property (readonly, nonatomic) NSString *modelIdentifier;

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;

@end
