@class NSString, NSObject;
@protocol OS_nw_browse_descriptor;

@interface NWBrowseDescriptor : NSObject <NWPrettyDescription>

@property (retain, nonatomic) NSObject<OS_nw_browse_descriptor> *internalDescriptor;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (readonly, nonatomic) NSString *bonjourServiceDomain;
@property (readonly, nonatomic) NSString *bonjourServiceType;

+ (unsigned int)descriptorType;
+ (BOOL)supportsBrowseCallback;
+ (Class)copyClassForDescriptorType:(int)a0;
+ (id)descriptorWithInternalDescriptor:(id)a0;
+ (id)descriptorWithProtocolBufferData:(id)a0;

- (id)encodedData;
- (id)createProtocolBufferObject;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDescriptor:(id)a0;
- (id)initWithEncodedData:(id)a0;
- (void)browseWithCompletionHandler:(id /* block */)a0;

@end
