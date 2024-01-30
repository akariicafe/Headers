@class NSData;

@interface HAPTLVBase : HAPTLVDescription

@property (readonly, nonatomic) NSData *tlvDatablob;

- (void).cxx_destruct;
- (BOOL)_parse:(id)a0;
- (BOOL)_parseFromTLVData;
- (id)initWithTLVData:(id)a0;
- (BOOL)_parseMandatory:(id)a0 optional:(id)a1;
- (id)_parseArray:(id)a0 result:(id *)a1 objectCreator:(id /* block */)a2;
- (BOOL)_parseFields:(id)a0;

@end
