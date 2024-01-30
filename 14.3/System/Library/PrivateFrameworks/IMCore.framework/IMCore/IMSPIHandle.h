@class NSString, IMHandle;

@interface IMSPIHandle : NSObject {
    IMHandle *_imHandle;
    BOOL _haveFetchedIMHandle;
}

@property (readonly) NSString *address;
@property (readonly) BOOL isMe;
@property (readonly) BOOL isBusiness;
@property (readonly) NSString *businessName;
@property (readonly) NSString *countryCode;
@property (readonly) NSString *displayName;
@property (readonly) NSString *cnContactID;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)handle;
- (id)initWithAddress:(id)a0 countryCode:(id)a1 isMe:(BOOL)a2;

@end
