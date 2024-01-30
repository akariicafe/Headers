@class NSString;

@interface RETextContentProvider : NSObject <REContentEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *contentEncodedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentProviderFromAttributedString:(id)a0;
+ (id)contentProviderFromClockKitTextProvider:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)attributedStringRepresentation;
- (id)clockKitTextProviderRepresentation;

@end
