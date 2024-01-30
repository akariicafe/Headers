@class NSMutableArray, NSObject;

@interface MapLeaf : GPBMessage <TransparencyVerifiable>

@property (retain) NSObject *verifier;
@property (retain, nonatomic) NSMutableArray *accountsArray;
@property (readonly, nonatomic) unsigned long long accountsArray_Count;

+ (id)descriptor;

- (unsigned long long)verifyWithError:(id *)a0;
- (id)recordForAccountId:(id)a0 deviceIdVRFOutput:(id)a1 appVersion:(unsigned long long)a2 clientDataVRFoutput:(id)a3;

@end
