@class NSSet, NSString, NSDate;

@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) NSDate *fromDate;
@property (retain, nonatomic) NSDate *toDate;
@property (retain, nonatomic) NSSet *matchingBundleIds;
@property (retain, nonatomic) NSSet *matchingDocumentIds;
@property (retain, nonatomic) NSString *matchingContactHandle;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToSourceQuery:(id)a0;

@end
