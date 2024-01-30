@class NSString;

@interface LSClaimBindingConfiguration : NSObject

@property (readonly) NSString *typeIdentifier;
@property unsigned long long bundleClassMask;
@property BOOL addClaimRecordIfMissing;

- (id)initWithTypeIdentifier:(id)a0;
- (void).cxx_destruct;

@end
