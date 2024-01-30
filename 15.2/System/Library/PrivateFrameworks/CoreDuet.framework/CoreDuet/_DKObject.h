@class NSString, NSUUID, _DKSource, NSDate;

@interface _DKObject : NSObject <_DKProtobufConverting, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSUUID *UUID;
@property (retain) _DKSource *source;
@property (retain) NSDate *creationDate;
@property (retain) NSDate *localCreationDate;

+ (id)entityName;
+ (id)fetchObjectWithUUID:(id)a0 context:(id)a1;
+ (id)objectFromManagedObject:(id)a0 readMetadata:(BOOL)a1 excludedMetadataKeys:(id)a2 cache:(id)a3;
+ (id)fromPBCodable:(id)a0;

- (BOOL)boolValue;
- (id)entityName;
- (id)stringValue;
- (void)encodeWithCoder:(id)a0;
- (double)doubleValue;
- (long long)typeCode;
- (long long)integerValue;
- (BOOL)copyToManagedObject:(id)a0;
- (id)toPBCodable;
- (BOOL)copyBaseObjectInfoFromManagedObject:(id)a0 cache:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
