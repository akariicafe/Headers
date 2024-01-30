@class NSArray, NSString, NSURL, PKBarcode;

@interface PKContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKBarcode *barcode;
@property (copy, nonatomic) NSArray *storeIdentifiers;
@property (copy, nonatomic) NSURL *appLaunchURL;
@property (copy, nonatomic) NSString *localizedDescription;

+ (id)contentWithFileURL:(id)a0;

- (void).cxx_destruct;
- (void)flushFormattedFieldValues;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1 privateBundle:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
