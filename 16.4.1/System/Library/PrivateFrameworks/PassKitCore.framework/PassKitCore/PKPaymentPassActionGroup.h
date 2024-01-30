@class NSString, NSArray, NSDictionary;

@interface PKPaymentPassActionGroup : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *actionGroupDescription;
@property (copy, nonatomic) NSArray *actionIdentifiers;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL hasRemoteContent;
@property (nonatomic) BOOL remoteContentRequiresAppletData;
@property (copy, nonatomic) NSDictionary *appletData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end
