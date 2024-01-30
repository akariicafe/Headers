@class NSString;

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *itemIdentifier;
@property (copy) NSString *providerIdentifier;
@property (readonly, copy) NSString *name;

- (id)initWithName:(id)a0 itemIdentifier:(id)a1 providerIdentifier:(id)a2;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
