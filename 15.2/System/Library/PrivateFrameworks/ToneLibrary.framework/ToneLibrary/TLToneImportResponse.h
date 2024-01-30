@class NSString;

@interface TLToneImportResponse : NSObject

@property (readonly, nonatomic) long long statusCode;
@property (readonly, nonatomic) NSString *toneIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithStatusCode:(long long)a0 toneIdentifier:(id)a1;

@end
