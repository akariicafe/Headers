@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
    NSString *_representation;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (BOOL)isNSNumber__;
- (BOOL)isEqualToNumber:(id)a0;
- (Class)superclass;
- (void)forwardInvocation:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)_allowsDirectEncoding;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithNumber:(id)a0 representation:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)stringValue;
- (void)encodeWithCoder:(id)a0;

@end
