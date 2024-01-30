@class NSString, WFType;

@interface WFRepresentation : NSObject <WFNaming, WFTyping, WFCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isEncodable) BOOL encodable;
@property (readonly, copy, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFType *wfType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;

@end
