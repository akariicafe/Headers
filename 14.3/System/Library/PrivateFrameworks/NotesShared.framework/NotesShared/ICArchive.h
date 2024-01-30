@class NSString;

@interface ICArchive : NSObject

@property (class, readonly, copy, nonatomic) NSString *universalTypeIdentifier;
@property (class, readonly, copy, nonatomic) NSString *userDefaultsKey;
@property (class, readonly, copy, nonatomic) NSString *dragToExportUserDefaultsKey;

@end
