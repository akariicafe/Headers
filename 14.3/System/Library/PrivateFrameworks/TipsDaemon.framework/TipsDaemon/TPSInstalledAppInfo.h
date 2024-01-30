@class NSString;

@interface TPSInstalledAppInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *minVersion;
@property (copy, nonatomic) NSString *maxVersion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
