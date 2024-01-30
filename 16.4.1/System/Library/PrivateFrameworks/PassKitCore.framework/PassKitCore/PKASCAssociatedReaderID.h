@class NSData, PKASCAssociatedReaderIDReaderCA;

@interface PKASCAssociatedReaderID : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *readerID;
@property (nonatomic) unsigned long long priority;
@property (retain, nonatomic) PKASCAssociatedReaderIDReaderCA *readerCA;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToASCAssociatedReaderID:(id)a0;

@end
