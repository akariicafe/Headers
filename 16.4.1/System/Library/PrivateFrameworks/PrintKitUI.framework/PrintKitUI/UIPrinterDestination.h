@class NSURL, NSString, NSData;

@interface UIPrinterDestination : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSURL *URL;
@property (copy) NSString *displayName;
@property (copy) NSData *txtRecord;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;

@end
