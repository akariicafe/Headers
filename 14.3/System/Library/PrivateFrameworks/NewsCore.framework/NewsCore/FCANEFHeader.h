@class NSData, NSString;

@interface FCANEFHeader : NSObject

@property (readonly, copy, nonatomic) NSData *wrappingKeyID;
@property (readonly, copy, nonatomic) NSData *wrappedKey;
@property (readonly, copy, nonatomic) NSString *contentType;
@property (readonly, nonatomic) unsigned long long totalLength;
@property (readonly, copy, nonatomic) NSData *headerData;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (id)initWithHeaderData:(id)a0 wrappingKeyID:(id)a1 wrappedKey:(id)a2 contentType:(id)a3;
- (id)initWithFileHandle:(id)a0;
- (id)initWithWrappingKeyID:(id)a0 wrappedKey:(id)a1 contentType:(id)a2;

@end
