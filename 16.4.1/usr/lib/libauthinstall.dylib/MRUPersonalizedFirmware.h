@class NSData;

@interface MRUPersonalizedFirmware : NSObject

@property (readonly) NSData *payload;
@property (readonly) NSData *manifest;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPayload:(id)a0 manifest:(id)a1;

@end
