@class NSArray, NSURLResponse, NSData, NSString, NSURLRequest, PARTask;

@interface PARReply : NSObject <NSSecureCoding> {
    NSArray *_rawResponse;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSURLRequest *httpRequest;
@property (retain, nonatomic) NSURLResponse *httpResponse;
@property (retain, nonatomic) NSArray *rawResponse;
@property (retain, nonatomic) NSData *data;
@property (weak, nonatomic) PARTask *task;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *geoSessionEntityString;
@property (retain, nonatomic) NSArray *localSuggestions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
