@class NSArray, NSString, NSDictionary;

@interface SSRedeemCodesResponse : NSObject <SSXPCCoding> {
    NSDictionary *_codeResponses;
    NSDictionary *_errors;
    NSDictionary *_redeemedCodes;
}

@property (readonly, copy, nonatomic) NSArray *codeResponses;
@property (readonly, nonatomic) NSArray *failedCodes;
@property (readonly, copy, nonatomic) NSArray *redeemedCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)dictionaryForCode:(id)a0;
- (id)responseDictionaryForCode:(id)a0;
- (void)setCodeResponses:(id)a0;
- (void)setFailedCodes:(id)a0;
- (void)setRedeemedCodes:(id)a0;
- (id)errorForCode:(id)a0;

@end
