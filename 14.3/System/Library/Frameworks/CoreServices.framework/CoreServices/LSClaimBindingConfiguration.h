@class NSString;

@interface LSClaimBindingConfiguration : NSObject

@property (readonly) NSString *typeIdentifier;
@property unsigned long long bundleClassMask;
@property BOOL addClaimRecordIfMissing;

- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)a0;

@end
