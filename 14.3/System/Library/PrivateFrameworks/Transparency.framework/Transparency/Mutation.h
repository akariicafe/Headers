@class NSData;

@interface Mutation : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) int mutationType;
@property (nonatomic) unsigned long long mutationMs;
@property (copy, nonatomic) NSData *uriVrfoutput;
@property (copy, nonatomic) NSData *accountId;
@property (copy, nonatomic) NSData *deviceIdVrfoutput;
@property (copy, nonatomic) NSData *clientDataVrfoutput;
@property (nonatomic) unsigned long long appVersion;

+ (id)descriptor;

@end
