@class NSString;

@interface CLKClockComplicationCount : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *applicationIdentifier;
@property (readonly, nonatomic) long long countOnFace;
@property (readonly, nonatomic, getter=isWidget) BOOL widget;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithApplicationIdentifier:(id)a0 countOnFace:(long long)a1 isWidget:(BOOL)a2;
- (id)mergedWith:(id)a0;

@end
