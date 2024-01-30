@class NSUUID, NSDictionary, NSURL, NSDate;

@interface WBSCloudTabCloseRequest : NSObject <NSCopying> {
    NSUUID *_sourceDeviceUUID;
}

@property (readonly, nonatomic) NSUUID *requestUUID;
@property (readonly, nonatomic) NSUUID *destinationDeviceUUID;
@property (readonly, nonatomic) NSUUID *tabUUID;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSDate *lastModified;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;

+ (id)_dictionaryWithURL:(id)a0 tabUUIDString:(id)a1 lastModified:(id)a2 sourceDeviceUUID:(id)a3 destinationDeviceUUID:(id)a4;
+ (id)destinationDeviceUUIDInDictionary:(id)a0;
+ (BOOL)isCloudTabCloseRequestDictionary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 requestUUID:(id)a1;
- (id)initWithURL:(id)a0 tabUUIDString:(id)a1 lastModified:(id)a2 sourceDeviceUUID:(id)a3 destinationDeviceUUID:(id)a4 requestUUID:(id)a5;
- (BOOL)matchesCloudTab:(id)a0;

@end
