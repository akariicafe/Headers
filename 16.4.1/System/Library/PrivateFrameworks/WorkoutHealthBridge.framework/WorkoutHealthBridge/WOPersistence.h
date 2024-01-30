@class NSUUID, NSDictionary, NSData, NSDate, NSString;

@interface WOPersistence : NSObject <NSSecureCoding, HDSyncCodable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long version;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSDictionary *keyedNumbers;
@property (copy, nonatomic) NSDictionary *keyedStrings;
@property (copy, nonatomic) NSData *persistedData;
@property (nonatomic) unsigned long long objectState;
@property (copy, nonatomic) NSDate *objectModificationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)zeroObjectModificationDate;

- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)data;
- (void).cxx_destruct;
- (long long)encodedByteCount;
- (id)initWithVersion:(long long)a0 type:(unsigned long long)a1 uuid:(id)a2 persistedData:(id)a3 objectState:(unsigned long long)a4 objectModificationDate:(id)a5;

@end
