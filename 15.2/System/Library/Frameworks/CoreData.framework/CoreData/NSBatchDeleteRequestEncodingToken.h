@class NSData;

@interface NSBatchDeleteRequestEncodingToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSData *fetchData;
@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) BOOL secure;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initForRequest:(id)a0;

@end
