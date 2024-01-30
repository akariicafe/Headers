@class NSDictionary, NSArray, NSString;

@interface MSOpenMailComposeViewControllerContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *compositionValues;
@property (retain, nonatomic) NSArray *attachments;
@property (readonly, nonatomic) NSString *autosaveIdentifier;
@property (retain, nonatomic) NSString *hostApplicationBundleIdentifier;

+ (id)unarchiveFromData:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAutosaveIdentifier:(id)a0 compositionValues:(id)a1 attachments:(id)a2;

@end
