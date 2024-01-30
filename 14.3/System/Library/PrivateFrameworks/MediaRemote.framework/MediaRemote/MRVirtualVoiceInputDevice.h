@class NSData, MRVirtualVoiceInputDeviceDescriptor;

@interface MRVirtualVoiceInputDevice : NSObject

@property (readonly, nonatomic) unsigned int deviceID;
@property (copy, nonatomic) MRVirtualVoiceInputDeviceDescriptor *descriptor;
@property (nonatomic) unsigned int recordingState;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDeviceID:(unsigned int)a0;
- (id)description;

@end
