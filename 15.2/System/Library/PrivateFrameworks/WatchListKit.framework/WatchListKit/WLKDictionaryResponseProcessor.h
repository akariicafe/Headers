@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject

@property (copy, nonatomic) NSString *dictionaryKeyPath;
@property (retain, nonatomic) Class objectClass;

- (id)processResponseData:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)processResponseData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
