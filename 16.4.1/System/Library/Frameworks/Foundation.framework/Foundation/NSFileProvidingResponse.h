@class NSString, NSError;

@interface NSFileProvidingResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *sandboxToken;
@property unsigned long long providedItemRecursiveGenerationCount;
@property (retain) NSError *error;

+ (id)responseWithError:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
