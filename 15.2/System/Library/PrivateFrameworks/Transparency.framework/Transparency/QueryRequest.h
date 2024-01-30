@class NSData, NSString;

@interface QueryRequest : GPBMessage

@property (nonatomic) int version;
@property (nonatomic) int application;
@property (copy, nonatomic) NSData *uriVrfOutput;
@property (copy, nonatomic) NSString *uri;

+ (id)descriptor;

@end
