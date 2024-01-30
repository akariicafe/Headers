@class NSNumber, NSString, NSMutableArray;

@interface ASDJobManifest : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_activities;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long manifestType;
@property (copy, nonatomic) NSNumber *purchaseID;
@property (copy, nonatomic) NSString *storeCorrelationID;

- (void)addActivity:(id)a0 withIdentifier:(id)a1;
- (id)initWithManifestType:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addActivity:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (unsigned long long)count;
- (id)_generateIdentifier;
- (void)_addActivity:(id)a0 withIdentifier:(id)a1 persistentID:(id)a2;
- (void)enumerateActivitiesUsingBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
