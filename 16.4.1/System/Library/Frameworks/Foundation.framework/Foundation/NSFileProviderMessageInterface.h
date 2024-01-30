@class NSString;

@interface NSFileProviderMessageInterface : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *itemIdentifier;
@property (copy) NSString *providerIdentifier;
@property (copy) NSString *itemIdentifier;
@property (copy) NSString *providerIdentifier;
@property (readonly, copy) NSString *name;

@end
