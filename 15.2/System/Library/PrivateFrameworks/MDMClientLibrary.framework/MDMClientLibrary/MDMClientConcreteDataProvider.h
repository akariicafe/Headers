@interface MDMClientConcreteDataProvider : NSObject <MDMClientDataProvider>

- (id)mdmDictionary;
- (BOOL)isMDMProfileInstalled;

@end
