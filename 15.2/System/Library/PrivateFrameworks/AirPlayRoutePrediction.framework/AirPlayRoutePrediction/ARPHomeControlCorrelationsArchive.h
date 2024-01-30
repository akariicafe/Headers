@class NSDictionary, NSDate;

@interface ARPHomeControlCorrelationsArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *archiveDate;
@property (readonly, nonatomic) NSDictionary *microlocationCorrelationsDictionary;
@property (readonly, nonatomic) NSDictionary *nextActionCorrelationsDictionary;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMicrolocationsCorrelationsDictionary:(id)a0 nextActionCorrelationsDictionary:(id)a1 archiveDate:(id)a2;

@end
