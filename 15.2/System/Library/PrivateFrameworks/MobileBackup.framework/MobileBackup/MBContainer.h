@class NSString, NSMutableDictionary, NSDate;

@interface MBContainer : NSObject <NSCopying> {
    NSMutableDictionary *_plist;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int containerType;
@property (readonly, nonatomic) NSString *containerTypeString;
@property (retain, nonatomic) NSString *containerDir;
@property (readonly, nonatomic) NSString *safeHarborDir;
@property (retain, nonatomic) NSDate *datePlacedInSafeHarbor;
@property (readonly, nonatomic) BOOL isSystemContainer;
@property (readonly, nonatomic) BOOL isSystemSharedContainer;
@property (readonly, nonatomic, getter=isSafeHarbor) BOOL safeHarbor;

+ (id)containerWithPropertyList:(id)a0;
+ (id)containerWithDomainName:(id)a0;

- (id)initWithPropertyList:(id)a0;
- (id)propertyListForBackupProperties;
- (id)propertyListForSafeHarborInfo;
- (BOOL)isEqual:(id)a0;
- (id)domain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
