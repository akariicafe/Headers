@class NSNumber, NSString;

@interface _NSJSONRoundTrippingNumber : NSObject <NSSecureCoding> {
    NSNumber *_number;
    NSString *_representation;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)instanceMethodSignatureForSelector:(SEL)a0;
+ (BOOL)isSubclassOfClass:(Class)a0;
+ (BOOL)instancesRespondToSelector:(SEL)a0;

- (BOOL)isEqualToNumber:(id)a0;
- (id)stringValue;
- (BOOL)_allowsDirectEncoding;
- (BOOL)isKindOfClass:(Class)a0;
- (void)encodeWithCoder:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (Class)superclass;
- (id)initWithNumber:(id)a0 representation:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)forwardInvocation:(id)a0;
- (BOOL)isNSNumber__;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)respondsToSelector:(SEL)a0;

@end
