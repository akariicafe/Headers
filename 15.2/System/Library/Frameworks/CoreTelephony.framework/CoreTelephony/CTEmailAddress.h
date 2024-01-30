@class NSString;

@interface CTEmailAddress : NSObject <NSCopying, CTMessageAddress>

@property (readonly) NSString *address;

+ (id)emailAddress:(id)a0;

- (id)encodedString;
- (id)canonicalFormat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(id)a0;

@end
