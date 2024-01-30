@class NSString, NSData;

@interface AVOutputDeviceAuthorizedPeerInternal : NSObject {
    NSString *ID;
    NSData *publicKey;
    BOOL isAdmin;
}

@end
