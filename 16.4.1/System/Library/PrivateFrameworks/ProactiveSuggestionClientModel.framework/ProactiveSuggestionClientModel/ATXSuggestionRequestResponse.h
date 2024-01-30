@class NSUUID, NSArray, NSData, NSError, ATXSuggestionRequest;

@interface ATXSuggestionRequestResponse : NSObject <NSSecureCoding, ATXProtoBufWrapper>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *suggestions;
@property (readonly, nonatomic) NSData *feedbackMetadata;
@property (readonly, nonatomic) ATXSuggestionRequest *originalRequest;
@property (readonly, nonatomic) int responseCode;
@property (readonly, nonatomic) NSError *error;

- (id)initWithProto:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)encodeAsProto;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (id)initWithProtoData:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSuggestions:(id)a0 feedbackMetadata:(id)a1 originalRequest:(id)a2 responseCode:(int)a3 error:(id)a4;
- (id)dataFromNSError:(id)a0;
- (id)initWithSuggestions:(id)a0 feedbackMetadata:(id)a1 originalRequest:(id)a2 responseCode:(int)a3 error:(id)a4 uuid:(id)a5;
- (id)unarchivedNSErrorFromData:(id)a0;

@end
