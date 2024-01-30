@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (BOOL)isEmpty;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
