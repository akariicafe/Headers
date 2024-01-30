@class GDEntityIdentifier;

@interface GDRankerItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) GDEntityIdentifier *entityID;
@property (readonly, nonatomic) double confidence;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEntityID:(id)a0 confidence:(double)a1;

@end
