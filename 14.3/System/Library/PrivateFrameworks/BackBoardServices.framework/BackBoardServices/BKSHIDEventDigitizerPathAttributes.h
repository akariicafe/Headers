@class NSString, BKSHIDEventAuthenticationMessage;

@interface BKSHIDEventDigitizerPathAttributes : NSObject <BSProtobufSerializable, NSCopying, BSDescriptionStreamable>

@property (nonatomic) long long pathIndex;
@property (nonatomic) unsigned int touchIdentifier;
@property (nonatomic) unsigned int userIdentifier;
@property (nonatomic) unsigned char locus;
@property (nonatomic) float zGradient;
@property (nonatomic) double hitTestLocationX;
@property (nonatomic) double hitTestLocationY;
@property (nonatomic) double preciseLocationX;
@property (nonatomic) double preciseLocationY;
@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
