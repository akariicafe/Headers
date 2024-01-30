@class NSString, NSFormatter;
@protocol NSCopying, NSSecureCoding, NSObject;

@interface _NSStringProxyForContext : NSString

@property (copy) NSString *string;
@property (copy) NSFormatter *formatter;
@property (copy) id<NSCopying, NSSecureCoding, NSObject> item;

- (id)_dynamicContextEvaluation:(id)a0 patternString:(id)a1;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithCoder:(id)a0;
- (void)_retainFormatter:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
