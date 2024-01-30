@class NSString, NSData;

@interface BCSAppclipCodePayload : NSObject <BCSCodePayload> {
    NSData *_payload;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long codeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 version:(unsigned long long)a1;
- (void)savePayloadInUserActivity:(id)a0;

@end
