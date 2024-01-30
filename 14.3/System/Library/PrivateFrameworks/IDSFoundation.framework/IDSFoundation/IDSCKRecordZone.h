@class IDSCKRecordZoneID;

@interface IDSCKRecordZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) IDSCKRecordZoneID *zoneID;

+ (id)alloc;
+ (Class)__class;

- (void).cxx_destruct;

@end
