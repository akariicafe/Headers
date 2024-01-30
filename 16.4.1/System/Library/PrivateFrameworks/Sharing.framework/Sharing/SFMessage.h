@class NSSet, NSUUID, NSData, SFSession, NSDictionary, SFDevice;

@interface SFMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *deviceIDs;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SFSession *session;
@property (copy, nonatomic) NSData *bodyData;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL expectsResponse;
@property (copy, nonatomic) NSDictionary *headerFields;
@property (retain, nonatomic) SFDevice *peerDevice;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end
