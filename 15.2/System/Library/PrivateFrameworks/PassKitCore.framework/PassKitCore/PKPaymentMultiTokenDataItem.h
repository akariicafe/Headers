@class NSArray;

@interface PKPaymentMultiTokenDataItem : PKPaymentDataItem

@property (readonly, nonatomic) NSArray *multiTokenContexts;

+ (long long)dataType;

- (BOOL)isValidWithError:(id *)a0;

@end
