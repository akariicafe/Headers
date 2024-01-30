@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>

@property (readonly) NSString *address;

+ (id)emailAddress:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithAddress:(id)a0;
- (id)canonicalFormat;
- (id)encodedString;

@end
