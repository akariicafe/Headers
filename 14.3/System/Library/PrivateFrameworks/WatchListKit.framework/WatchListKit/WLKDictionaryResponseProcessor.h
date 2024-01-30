@class NSString;

@interface WLKDictionaryResponseProcessor : NSObject

@property (copy, nonatomic) NSString *dictionaryKeyPath;
@property (retain, nonatomic) Class objectClass;

- (void).cxx_destruct;
- (id)processResponseData:(id)a0 error:(id *)a1;
- (id)processResponseData:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
