@class NSString, NSUUID, NSMutableDictionary;

@interface _DECItem : NSObject <_DECItemEquivalency, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSMutableDictionary *metadata;

+ (unsigned long long)category;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
