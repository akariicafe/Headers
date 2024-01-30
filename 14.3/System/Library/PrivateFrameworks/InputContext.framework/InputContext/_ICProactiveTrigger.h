@class NSSet, NSDictionary, NSString, TIInputContextHistory;

@interface _ICProactiveTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned char triggerSourceType;
@property (retain, nonatomic) NSSet *availableApps;
@property (readonly, nonatomic) NSDictionary *attributedString;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) TIInputContextHistory *inputContextHistory;
@property (readonly, nonatomic) NSString *contentType;

+ (BOOL)isEquivalentDictionary:(id)a0 second:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSource:(unsigned char)a0 attributes:(id)a1;
- (id)initWithContext:(id)a0 inputContextHistory:(id)a1 contentType:(id)a2;
- (BOOL)isEqualToProactiveTrigger:(id)a0;

@end
