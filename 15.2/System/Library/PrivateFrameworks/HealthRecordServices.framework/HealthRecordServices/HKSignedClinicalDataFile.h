@class NSDictionary, NSURL, NSDate, NSFileHandle;

@interface HKSignedClinicalDataFile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSFileHandle *fileHandle;
@property (readonly, copy, nonatomic) NSURL *sourceURL;
@property (readonly, copy, nonatomic) NSDate *receivedDate;
@property (readonly, copy, nonatomic) NSDictionary *metadata;

+ (id)signedClinicalDataFileWithURL:(id)a0 sourceURL:(id)a1 receivedDate:(id)a2 countryOfOrigin:(id)a3 error:(id *)a4;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithFileURL:(id)a0 fileHandle:(id)a1 sourceURL:(id)a2 receivedDate:(id)a3 metadata:(id)a4;

@end
