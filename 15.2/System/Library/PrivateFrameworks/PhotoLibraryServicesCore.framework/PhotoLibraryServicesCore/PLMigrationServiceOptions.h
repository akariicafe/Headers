@class NSString;

@interface PLMigrationServiceOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *clientBundleId;
@property (copy) NSString *suggestedDestinationName;
@property unsigned short option;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isPMSOption:(unsigned short)a0;
- (id)nameForOption:(unsigned short)a0;

@end
