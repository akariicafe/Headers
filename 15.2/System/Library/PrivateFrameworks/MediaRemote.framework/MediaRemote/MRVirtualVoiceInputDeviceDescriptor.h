@class NSArray, NSDictionary, NSData, _MRVoiceInputDeviceDescriptorProtobuf;

@interface MRVirtualVoiceInputDeviceDescriptor : NSObject <NSMutableCopying>

@property (readonly, nonatomic) NSArray *supportedFormats;
@property (readonly, nonatomic) NSDictionary *defaultFormat;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) _MRVoiceInputDeviceDescriptorProtobuf *protobuf;

- (id)initWithProtobuf:(id)a0;
- (id)initWithData:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
