@class NSString, NSDictionary, NSURL, _LSLazyPropertyList, NSArray;

@interface _LSBoundIconInfo : NSObject <LSIconResourceLocator, NSSecureCoding> {
    BOOL _prerendered;
    BOOL _badge;
    BOOL _documentAllowOverride;
    NSURL *_containerURL;
    NSURL *_dataContainerURL;
    _LSLazyPropertyList *_iconsDictionary;
    NSString *_cacheKey;
    NSArray *_fileNames;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSURL *resourcesDirectoryURL;
@property (readonly) NSDictionary *bundleIconsDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
