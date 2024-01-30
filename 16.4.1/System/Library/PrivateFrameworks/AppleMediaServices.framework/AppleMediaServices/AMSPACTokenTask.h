@class NSString, NSData;

@interface AMSPACTokenTask : AMSTask

@property (readonly) NSString *simLabelID;
@property (retain) NSData *signingData;

+ (id)signatureForSimLabelID:(id)a0 fromSignatures:(id)a1;
+ (id)signatureMapFromServerSignatures:(id)a0;
+ (id)tokenForSimLabelID:(id)a0 withQueue:(id)a1 signingData:(id)a2;

- (id)perform;
- (void).cxx_destruct;
- (id)initWithSimLabelID:(id)a0;

@end
