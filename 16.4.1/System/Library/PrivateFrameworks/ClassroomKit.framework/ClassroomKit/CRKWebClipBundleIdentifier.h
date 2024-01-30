@class NSString;

@interface CRKWebClipBundleIdentifier : NSObject

@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic, getter=isWebClipHostApplication) BOOL webClipHostApplication;
@property (readonly, nonatomic, getter=isSpecificWebClip) BOOL specificWebClip;

+ (id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)a0;
+ (id)specificWebClipPrefix;
+ (id)webClipBundleIdentifierInString:(id)a0;
+ (id)webClipHostApplicationBundleIdentifier;

- (id)initWithString:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
