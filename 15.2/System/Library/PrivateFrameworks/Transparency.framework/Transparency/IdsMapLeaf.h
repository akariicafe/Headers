@class NSMutableArray, NSObject;

@interface IdsMapLeaf : TLSMessage <TransparencyVerifiable, TLSMessage>

@property (retain) NSObject *verifier;
@property (retain) NSMutableArray *accountsArray;
@property (retain) NSMutableArray *extensions;

+ (id)parseFromData:(id)a0 error:(id *)a1;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)data;
- (id)debugDescription;
- (id)recordForAccountKeyHash:(id)a0 deviceIdHash:(id)a1 appVersion:(unsigned long long)a2 clientDataHash:(id)a3;

@end
