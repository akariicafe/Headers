@class NSString;

@interface WFDisplay : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *serializationUUID;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *wfName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDisplayUUID:(id)a0 name:(id)a1;
- (id)initWithDisplayUUID:(id)a0 serializationUUID:(id)a1 localizedName:(id)a2;

@end
