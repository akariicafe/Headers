@class NSString, NSURL, DIIOMedia, NSNumber;

@interface DIAttachedDeviceInfo : NSObject

@property (retain, nonatomic) DIIOMedia *ioMedia;
@property (readonly, copy, nonatomic) NSString *BSDName;
@property (readonly, copy, nonatomic) NSURL *imageURL;
@property (readonly, copy, nonatomic) NSURL *shadowURL;
@property (readonly, copy, nonatomic) NSURL *cacheURL;
@property (readonly, nonatomic) long long frameworkNum;
@property (readonly, nonatomic) NSNumber *mediaSize;
@property (readonly, nonatomic) NSNumber *blockSize;
@property (readonly, nonatomic) NSNumber *pid;

+ (id)DI1URLWithData:(id)a0 error:(id *)a1;
+ (id)copyAllMountPoints;
+ (id)newDI1DevicesArrayWithError:(id *)a0;
+ (id)newDI2DevicesArrayWithError:(id *)a0;
+ (id)newDevicesArrayWithError:(id *)a0;
+ (id)newEntityDictWithIOMedia:(id)a0 mountPoints:(id)a1;

- (id)toDictionary;
- (id)initWithDevice:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)copyEntitiesList;
- (BOOL)fillDI1InfoWithDevice:(id)a0 error:(id *)a1;
- (BOOL)fillDI2InfoWithDevice:(id)a0 error:(id *)a1;
- (id)initWithBSDName:(id)a0 error:(id *)a1;
- (BOOL)setDI2PIDWithDevice:(id)a0 error:(id *)a1;

@end
