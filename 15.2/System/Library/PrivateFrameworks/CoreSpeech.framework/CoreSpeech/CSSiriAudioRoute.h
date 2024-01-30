@class NSString;

@interface CSSiriAudioRoute : NSObject

@property (readonly, copy, nonatomic) NSString *deviceName;
@property (readonly, copy, nonatomic) NSString *uid;
@property (readonly, nonatomic) BOOL isBluetooth;
@property (readonly, copy, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *destination;

- (void).cxx_destruct;
- (id)initWithAudioDeviceID:(unsigned int)a0;

@end
