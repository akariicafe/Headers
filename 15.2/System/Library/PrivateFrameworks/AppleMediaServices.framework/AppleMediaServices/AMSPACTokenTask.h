@class NSString, NSData;

@interface AMSPACTokenTask : AMSTask

@property (readonly) NSString *simLabelID;
@property (retain) NSData *signingData;

+ (id)tokenForSimLabelID:(id)a0 withQueue:(id)a1 signingData:(id)a2;
+ (id)signatureForSimLabelID:(id)a0 fromSignatures:(id)a1;
+ (id)signatureMapFromServerSignatures:(id)a0;

- (id)initWithSimLabelID:(id)a0;
- (void).cxx_destruct;
- (id)perform;

@end
