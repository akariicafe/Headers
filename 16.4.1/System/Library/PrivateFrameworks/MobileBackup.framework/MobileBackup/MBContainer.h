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

+ (id)containerWithDomainName:(id)a0;
+ (id)containerWithPropertyList:(id)a0;

- (id)domain;
- (id)initWithPropertyList:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)propertyListForBackupProperties;
- (id)propertyListForSafeHarborInfo;

@end
