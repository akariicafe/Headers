@class NSData, NSDictionary, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long advertisementVersion;
@property (readonly, copy) NSData *advertisementPayload;
@property (readonly, copy) NSDictionary *options;
@property (readonly, retain) SFPeerDevice *device;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithAdvertisementVersion:(unsigned long long)a0 advertisementPayload:(id)a1 options:(id)a2 device:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
