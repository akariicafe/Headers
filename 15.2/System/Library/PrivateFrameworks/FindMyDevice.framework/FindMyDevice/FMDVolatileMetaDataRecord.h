@class NSDictionary, NSString;

@interface FMDVolatileMetaDataRecord : NSObject <NSSecureCoding, FMDDictionaryRepresentable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)appendMetaData:(id)a0;

@end
