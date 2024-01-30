@class NSArray, NSDictionary, NSString;

@interface NSFileProviderEnumerationProperties : FPEnumerationSettings

@property (copy) NSArray *fileTypes;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy) NSString *enumeratingApplicationBundleIdentifier;
@property (copy) NSString *enumeratedItemIdentifier;

- (void).cxx_destruct;

@end
