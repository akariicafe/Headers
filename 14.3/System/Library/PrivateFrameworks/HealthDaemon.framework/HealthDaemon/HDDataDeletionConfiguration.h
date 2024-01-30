@class NSString;

@interface HDDataDeletionConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL generateDeletedObjects;
@property (nonatomic) BOOL failIfNotFound;
@property (nonatomic) BOOL notifyObservers;
@property (nonatomic) BOOL secureDelete;
@property (nonatomic) BOOL preserveStartAndEndDates;
@property (copy, nonatomic) id /* block */ recursiveDeleteAuthorizationBlock;
@property (copy, nonatomic) NSString *restrictedSourceBundleIdentifier;
@property (copy, nonatomic) Class entityClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
