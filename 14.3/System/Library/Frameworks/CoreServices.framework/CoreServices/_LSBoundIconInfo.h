@class NSString, _LSLazyPropertyList, NSURL, NSArray, NSDictionary;

@interface _LSBoundIconInfo : NSObject <LSIconResourceLocator, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSURL *containerURL;
@property (retain, nonatomic) NSURL *dataContainerURL;
@property (retain, nonatomic) NSURL *resourcesDirectoryURL;
@property (copy, nonatomic) _LSLazyPropertyList *iconsDictionary;
@property (copy, nonatomic) NSString *cacheKey;
@property (copy, nonatomic) NSArray *fileNames;
@property (nonatomic, getter=isPrerendered) BOOL prerendered;
@property (nonatomic, getter=isBadge) BOOL badge;
@property (nonatomic) BOOL documentAllowOverride;
@property (readonly) NSDictionary *bundleIconsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)hasValidIconDictionary;
- (BOOL)hasValidFileNames;
- (void)encodeWithCoder:(id)a0;

@end
