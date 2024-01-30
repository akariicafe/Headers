@class NSString, NSDictionary, NSData, NSURL, NSError;

@interface HSResponse : NSObject

@property (readonly, nonatomic) NSString *MIMEType;
@property (readonly, nonatomic) unsigned long long responseCode;
@property (readonly, nonatomic) NSDictionary *responseHeaderFields;
@property (readonly, nonatomic) NSData *responseData;
@property (copy, nonatomic) NSURL *responseDataFileURL;
@property (readonly, nonatomic) NSError *error;

+ (id)responseWithCode:(unsigned long long)a0 headerFields:(id)a1 data:(id)a2 MIMEType:(id)a3 error:(id)a4;
+ (id)responseWithResponse:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCode:(unsigned long long)a0 headerFields:(id)a1 data:(id)a2 MIMEType:(id)a3 error:(id)a4;

@end
