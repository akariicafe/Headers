@class NSString, AVExternalDevice;

@interface AVExternalDeviceScreenBorrowToken : NSObject {
    AVExternalDevice *_externalDevice;
}

@property (readonly, nonatomic) NSString *client;
@property (readonly, nonatomic) NSString *reason;

- (id)initWithExternalDevice:(id)a0 client:(id)a1 reason:(id)a2;
- (id)init;
- (void)dealloc;

@end
