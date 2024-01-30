@class NSArray;

@interface NFCNDEFMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *records;
@property (readonly, nonatomic) unsigned long long length;

+ (id)ndefMessageWithData:(id)a0;
+ (BOOL)_validateRecords:(id)a0 fromOriginal:(id)a1;
+ (id)_getPayloadsFromNDEFRecords:(id)a0;

- (void).cxx_destruct;
- (id)asData;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithRecords:(id)a0;
- (id)initWithEmptyNdefMessage;
- (id)initWithNDEFRecords:(id)a0;
- (id)initWithNFNdefMessage:(id)a0;
- (id)_getURLsFromNDEFMessage:(id)a0;

@end
