@class NSString, NSArray;

@interface _CLMicroLocationSourceIdAndSourceData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sourceIdsIdentifier;
@property (readonly, copy, nonatomic) NSArray *sourceData;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithSourceIdsIdentifier:(id)a0 sourceData:(id)a1;

@end
