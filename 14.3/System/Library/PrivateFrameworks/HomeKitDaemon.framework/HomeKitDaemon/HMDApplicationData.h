@class NSUUID, NSMutableDictionary, NSString;

@interface HMDApplicationData : HMFObject <NSSecureCoding, NSCopying, HMFDumpState>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSMutableDictionary *appDataDictionary;
@property (copy, nonatomic) NSUUID *parentUUID;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionary;
- (void)removeApplicationDataForIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dumpState;
- (void)updateWithModel:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)modelObjectWithChangeType:(unsigned long long)a0;
- (id)initWithParentUUID:(id)a0;
- (void)setApplicationData:(id)a0 forIdentifier:(id)a1;
- (id)initWithDictionary:(id)a0 parentUUID:(id)a1;
- (void)updateParentUUIDIfNil:(id)a0;
- (id)applicationDataForIdentifier:(id)a0;

@end
