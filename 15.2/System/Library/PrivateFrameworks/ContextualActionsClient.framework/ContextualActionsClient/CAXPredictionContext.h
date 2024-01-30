@class NSString, NSArray, NSDate;

@interface CAXPredictionContext : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXSuggestionExecutableProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *suggestionDate;
@property (copy, nonatomic) NSString *sourceAppName;
@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSArray *previousActions;
@property (readonly, copy, nonatomic) NSString *searchTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)checkAndReportDecodingFailureIfNeededForid:(id)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProto:(id)a0;
- (id)jsonRawData;
- (void)encodeWithCoder:(id)a0;
- (BOOL)checkAndReportDecodingFailureIfNeededFordouble:(double)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)initWithProtoData:(id)a0;
- (id)date;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)proto;
- (BOOL)checkAndReportDecodingFailureIfNeededForint32_t:(int)a0 key:(id)a1 coder:(id)a2 errorDomain:(id)a3 errorCode:(long long)a4;
- (id)encodeAsProto;
- (id)json;
- (void)setDate:(id)a0;
- (id)initWithSuggestionDate:(id)a0 sourceAppName:(id)a1 contents:(id)a2 previousActions:(id)a3 searchTerm:(id)a4;
- (id)initWithAbsoluteDate:(double)a0 sourceAppName:(id)a1 contents:(id)a2 previousActions:(id)a3 searchTerm:(id)a4;
- (BOOL)isEqualToCAXPredictionContext:(id)a0;

@end
