@class NSNumber, NSString, NSMutableArray;

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_activities;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long manifestType;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (copy, nonatomic) NSString *storeCorrelationID;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)addActivity:(id)a0;
- (void)addActivity:(id)a0 withIdentifier:(id)a1;
- (void)enumerateActivitiesUsingBlock:(id /* block */)a0;
- (id)initWithManifestType:(long long)a0;

@end
