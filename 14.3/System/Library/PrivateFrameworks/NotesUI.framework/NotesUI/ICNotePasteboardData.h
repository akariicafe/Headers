@class NSData, ICDataPersister;

@interface ICNotePasteboardData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSData *attributedStringData;
@property (readonly, nonatomic) ICDataPersister *dataPersister;

+ (id)pasteboardDataFromPersistenceData:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAttributedStringData:(id)a0 dataPersister:(id)a1;
- (id)persistenceData;

@end
