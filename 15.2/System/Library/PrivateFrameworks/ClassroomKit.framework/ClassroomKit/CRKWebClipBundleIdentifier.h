@class NSString;

@interface CRKWebClipBundleIdentifier : NSObject

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic, getter=isWebClipHostApplication) BOOL webClipHostApplication;
@property (readonly, nonatomic, getter=isSpecificWebClip) BOOL specificWebClip;

+ (id)webClipBundleIdentifierInString:(id)a0;
+ (id)webClipHostApplicationBundleIdentifier;
+ (id)specificWebClipPrefix;
+ (id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)a0;

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
