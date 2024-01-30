@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding>

@property (class, readonly) NSData *beforeFirstSyncComponent;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *contentVersion;
@property (readonly, nonatomic) NSData *metadataVersion;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithContentVersion:(id)a0 metadataVersion:(id)a1;
- (id)versionRewritingBeforeFirstSync;

@end
