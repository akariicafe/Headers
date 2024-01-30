@class NSString;

@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (BOOL)isViewInAppStore;

@end
