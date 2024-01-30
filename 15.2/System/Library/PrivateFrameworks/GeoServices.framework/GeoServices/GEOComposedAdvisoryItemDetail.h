@class NSArray;
@protocol GEOServerFormattedString;

@interface GEOComposedAdvisoryItemDetail : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<GEOServerFormattedString> title;
@property (readonly, nonatomic) NSArray *details;

- (void)encodeWithCoder:(id)a0;
- (id)initWithRestrictionDetails:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
