@class NSString;

@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress>

@property (readonly) NSString *address;

+ (id)asciiAddressWithString:(id)a0;

- (id)encodedString;
- (id)canonicalFormat;
- (id)initWithAddress:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
