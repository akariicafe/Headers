@class NSString;

@interface GKPlayerEmailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *addressSHA1;
@property (retain, nonatomic) NSString *addressPrefix;
@property (nonatomic) BOOL verified;

+ (id)secureCodedPropertyKeys;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
