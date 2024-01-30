@class NSString;

@interface WFFileSize : NSObject <NSSecureCoding, NSCopying, WFSerializableContent, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long byteCount;
@property (readonly, nonatomic) NSString *formattedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)objectWithWFSerializedRepresentation:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithByteCount:(long long)a0;
- (id)wfSerializedRepresentation;

@end
