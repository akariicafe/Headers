@class NSError;

@interface WFFileAccessDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long fileResponseCode;
@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithFileResponseCode:(unsigned long long)a0 error:(id)a1;

@end
