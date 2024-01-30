@class NSString, NSDictionary;

@interface ICInAppMessageEventEntry : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *messageIdentifier;
@property (readonly, nonatomic) NSDictionary *params;
@property (readonly, nonatomic) NSString *eventIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageIdentifier:(id)a0 params:(id)a1 eventIdentifier:(id)a2;
- (id)initWithMessageIdentifier:(id)a0 params:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
