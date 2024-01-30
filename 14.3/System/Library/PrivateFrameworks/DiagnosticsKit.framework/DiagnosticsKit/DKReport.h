@class NSArray;

@interface DKReport : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *components;

+ (id)reportWithComponents:(id)a0;

- (id)initWithComponents:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)arrayForJSON;
- (id)reportByMergingReport:(id)a0;

@end
