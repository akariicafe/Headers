@class NSString, NSArray;

@interface PCNativeAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long location;
@property (retain, nonatomic) NSArray *assetInformation;
@property (nonatomic) unsigned long long adamID;
@property (retain, nonatomic) NSString *treatment;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
